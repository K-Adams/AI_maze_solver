To compile: g++ -std=c++11 mazesolver2.cpp -o mazesolver2

To run: ./mazesolver2

Summary:

Maze space encoding--
I have taken a simple approach to encoding the maze space. I have formatted a 34x3 int array. In each row of the array is a set of three path choices.
Each path choice contains a current position, an adjacent(connected/child) path, or a dead end value(00). The maze starts at node 0 (element nodes[0][0]),
and ends at node number 23. The node numbers range all the way to 27. I will make sure to include a picture of this node layout so it makes more sense. The
farther in the maze the program goes, the higher the node numbers go. In my encoding I am assuming the walls are in place and it knows the correct way to move to get to the next node. This way I efficiently searched through the array for increasing node numbers, cutting out the need for movement functions. In order to successfully get through the maze I had a queue set up to make up the path choices. Each path choice had to be linked to an adjacent node number.

Encoding of the maze space with node array:
int nodes[34][3] = 
  {
    {0,1,00},{0,2,00},{2,3,4},{4,2,7},{4,2,5},{5,4,6},{5,7,6},{7,4,8},{7,5,8},{7,8,9},{9,7,8},
    {11,9,10},{10,9,00},{11,9,12},{12,11,13},{13,12,14},{00,12,13},{14,15,16},{12,14,16},{00,14,15},
    {16,14,17},{17,16,18},{18,17,20},{18,19,20},{18,19,25},{21,18,20},{22,20,21},{23,00,22},
    {24,25,00},{25,24,26},{25,24,27},{26,27,25},{27,26,00},{27,25,00}
  };


My Algorith--

I used a breadth first search approach with searching the array for an increasing larger node number indicating forward or backtracing movement, all while
starting at the beginning of the maze. I ensured that the algorithm ended once it hit node number 23 indicating it had found the exit to the maze. My searching loops through each element of each row and column of the array to choose a larger node number than the current one in the queue. It continues to loop creating a list of path choice sequence until it reaches the end of the maze.  

Output of my code:


Iteration: 0 Choice: 0
Iteration: 1 Choice: 1
Iteration: 2 Choice: 2
Iteration: 3 Choice: 4
Iteration: 4 Choice: 7
Iteration: 5 Choice: 4
Iteration: 6 Choice: 5
Iteration: 7 Choice: 6
Iteration: 8 Choice: 7
Iteration: 9 Choice: 7
Iteration: 10 Choice: 8
Iteration: 11 Choice: 7
Iteration: 12 Choice: 8
Iteration: 13 Choice: 9
Iteration: 14 Choice: 11
Iteration: 15 Choice: 10
Iteration: 16 Choice: 9
Iteration: 17 Choice: 11
Iteration: 18 Choice: 12
Iteration: 19 Choice: 13
Iteration: 20 Choice: 14
Iteration: 21 Choice: 16
Iteration: 22 Choice: 16
Iteration: 23 Choice: 16
Iteration: 24 Choice: 17
Iteration: 25 Choice: 18
Iteration: 26 Choice: 20
Iteration: 27 Choice: 20
Iteration: 28 Choice: 21
Iteration: 29 Choice: 22
Iteration: 30 Choice: 23
