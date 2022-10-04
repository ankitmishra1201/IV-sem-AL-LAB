double maxProfitBBKnapsack()
{
    // Max-profit branch-and-bound search of solution space tree.
    // Set bestPackingSoFar[i] = 1 iff object i is in knapsack in best filling.
    // Return profit of best knapsack filling.
    // initialize for level 1
    startbbNode *eNode = NULL;
    int eNodeLevel = 1;
    double maxProfitSoFar = 0.0;
    double maxPossibleProfitInSubtree = profitBound(1);
    // search subset space tree
    while (eNodeLevel != numberOfObjects + 1)
    {
        // not at leaf
        // check left chil
        double weightOfLeftChild = weightOfCurrentPacking + weight[eNodeLevel];
        if (weightOfLeftChild <= capacity)
        {
            // feasible left child
            if (profitFromCurrentPacking + profit[eNodeLevel] > maxProfitSoFar)
                maxProfitSoFar = profitFromCurrentPacking + profit[eNodeLevel];
            addLiveNode(maxPossibleProfitInSubtree, profitFromCurrentPacking + profit[eNodeLevel], weightOfCurrentPacking + weight[eNodeLevel], eNodeLevel + 1, eNode, true);
        }
        maxPossibleProfitInSubtree = profitBound(eNodeLevel + 1);
        // check right child
        if (maxPossibleProfitInSubtree >= maxProfitSoFar) 
        // right child has prospectsaddLiveNode(maxPossibleProfitInSubtree,profitFromCurrentPacking,weightOfCurrentPacking,eNodeLevel + 1, eNode, false);// get next E-node, heap cannot be emptyheapNode nextENode = liveNodeMaxHeap.top();liveNodeMaxHeap.pop();eNode = nextENode.liveNode;