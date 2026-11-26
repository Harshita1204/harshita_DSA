#include <bits/stdc++.h>
using namespace std;
struct Item {
    int weight;       
    int profit;     
    int index;        // Original item number
    double ratio;     // Profit per unit weight
};

// Stores information about each node in the decision tree
struct Node {
    int level;              // Which item we are currently considering
    int weight;             // Total weight selected so far
    int profit;             // Total profit earned so far
    double bound;           // Maximum profit we can possibly get from this node
    vector<int> taken;      // 1 means item selected, 0 means not selected
};

// Sort items according to profit/weight ratio
// Item with higher ratio will come first
bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}

// This function calculates the upper bound of a node
// Upper bound means the maximum profit we might achieve from this node
double calculateBound(Node u, int n, int W, vector<Item>& items) {

    // If the bag is already full, we cannot add anything more
    if (u.weight >= W)
        return 0;

    // Start with the profit we have already earned
    double profitBound = u.profit;

    // Store the weight already used in the bag
    int totalWeight = u.weight;

    // Start checking from the next item
    int j = u.level;

    // Keep adding complete items as long as they fit in the bag
    while (j < n && totalWeight + items[j].weight <= W) {

        // Add the item's weight
        totalWeight += items[j].weight;

        // Add the item's profit
        profitBound += items[j].profit;

        // Move to the next item
        j++;
    }

    // If some capacity is still available, take a fraction
    // of the next item ONLY for calculating the upper bound
    if (j < n) {

        // Calculate remaining capacity
        int remaining = W - totalWeight;

        // Add fractional profit to estimate the maximum profit
        profitBound += items[j].ratio * remaining;
    }

    // Return the calculated upper bound
    return profitBound;
}

// Main Branch and Bound function for 0/1 Knapsack
void knapsack(int W, vector<Item>& items, int n) {

    // First, sort items by highest profit/weight ratio
    sort(items.begin(), items.end(), compare);

    // Priority queue stores nodes according to their bound
    // Node with the HIGHEST bound will be selected first
    priority_queue<Node, vector<Node>,
        function<bool(Node, Node)>> pq(
            [](Node a, Node b) {
                return a.bound < b.bound;
            }
        );

    // Create the starting node (root node)
    Node root;

    root.level = 0;       // No item has been considered yet
    root.weight = 0;      // No weight has been added
    root.profit = 0;      // No profit has been earned
    root.taken = {};      // No item has been selected

    // Calculate the upper bound of the starting node
    root.bound = calculateBound(root, n, W, items);

    // Insert the root node into the priority queue
    pq.push(root);

    // Stores the maximum profit found so far
    int maxProfit = 0;

    // Stores which items give us the maximum profit
    vector<int> bestTaken;

    // Continue until there are no nodes left to explore
    while (!pq.empty()) {

        // Get the node having the highest bound
        Node u = pq.top();

        // Remove that node from the priority queue
        pq.pop();

        // If this node cannot give better profit, ignore it
        // This is called PRUNING
        if (u.bound <= maxProfit)
            continue;

        // If all items have been considered, stop exploring this node
        if (u.level >= n)
            continue;

        // Get the index of the current item
        int i = u.level;


        // ---------------- INCLUDE CURRENT ITEM ----------------

        // Create a new node for selecting the current item
        Node v;

        // Move to the next item
        v.level = u.level + 1;

        // Add current item's weight to previous weight
        v.weight = u.weight + items[i].weight;

        // Add current item's profit to previous profit
        v.profit = u.profit + items[i].profit;

        // Copy previously selected items
        v.taken = u.taken;

        // Mark current item as selected (1 means INCLUDE)
        v.taken.push_back(1);

        // Check whether the total weight is within bag capacity
        if (v.weight <= W) {

            // If this selection gives more profit, update maximum profit
            if (v.profit > maxProfit) {

                maxProfit = v.profit;

                // Save the items selected in this solution
                bestTaken = v.taken;
            }

            // Calculate the upper bound of the include branch
            v.bound = calculateBound(v, n, W, items);

            // If this branch can give better profit, explore it
            if (v.bound > maxProfit)
                pq.push(v);
        }


        // ---------------- EXCLUDE CURRENT ITEM ----------------

        // Create another node for NOT selecting the current item
        Node w;

        // Move to the next item
        w.level = u.level + 1;

        // Weight remains the same because we did not select the item
        w.weight = u.weight;

        // Profit remains the same because we did not select the item
        w.profit = u.profit;

        // Copy previously selected items
        w.taken = u.taken;

        // Mark current item as not selected (0 means EXCLUDE)
        w.taken.push_back(0);

        // Calculate the upper bound of the exclude branch
        w.bound = calculateBound(w, n, W, items);

        // Explore this branch only if it can improve our answer
        if (w.bound > maxProfit)
            pq.push(w);
    }

    // Display the maximum profit obtained
    cout << "\nMaximum Profit = " << maxProfit << endl;

    // Display the items selected for maximum profit
    cout << "Selected Items: ";

    // Check every selection stored in bestTaken
    for (int i = 0; i < bestTaken.size(); i++) {

        // If value is 1, that item was selected
        if (bestTaken[i] == 1)
            cout << items[i].index << " ";
    }

    cout << endl;
}

// Program execution starts from main()
int main() {

    int n, W;

    // Take the total number of items from the user
    cout << "Enter number of items: ";
    cin >> n;

    // Create a vector to store all items
    vector<Item> items(n);

    // Take weight and profit of every item
    cout << "Enter weight and profit of each item:\n";

    for (int i = 0; i < n; i++) {

        cin >> items[i].weight >> items[i].profit;

        // Store original item number
        items[i].index = i + 1;

        // Calculate profit/weight ratio
        items[i].ratio =
            (double)items[i].profit / items[i].weight;
    }

    // Take maximum capacity of the knapsack
    cout << "Enter knapsack capacity: ";
    cin >> W;

    // Call the Branch and Bound algorithm
    knapsack(W, items, n);

    return 0;
}
