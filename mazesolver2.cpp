//Kollin Adams
//CSCI 4550 Assignment 1
//Maier
//All code was done by Kollin Adams on an Individual basis.

#include <iostream>
#include <queue>
#include <stddef.h>

using namespace std;

//initialize Queue
queue<int>Queue;

//declare maze nodes and encoding arrangement
int nodes[34][3] = 
  {
    {0,1,00},{0,2,00},{2,3,4},{4,2,7},{4,2,5},{5,4,6},{5,7,6},{7,4,8},{7,5,8},{7,8,9},{9,7,8},
    {11,9,10},{10,9,00},{11,9,12},{12,11,13},{13,12,14},{00,12,13},{14,15,16},{12,14,16},{00,14,15},
    {16,14,17},{17,16,18},{18,17,20},{18,19,20},{18,19,25},{21,18,20},{22,20,21},{23,00,22},
    {24,25,00},{25,24,26},{25,24,27},{26,27,25},{27,26,00},{27,25,00}
  };


int main()
{
  //push the starting point node on to the Queue
  Queue.push(nodes[0][0]);

  //declare an iterator count variable
  int n = 0;

  //Searching algorith to search each element in each row and column for a greater node number than the current node element in the search
  //if the node number element is > than the element to the right path choice, then push the node number on to the Queue
  for(int row = 0; row<34; row++)
    {
      for(int col = 0; col < 3; col++)
	{
	  if(nodes[row][col] > nodes[row][col+1])
	    {
	      if(nodes[row][col] <= 23)
		{
		  Queue.push(nodes[row][col]);
		}
	    }
	}
    }

  //while the queue is not empty, print out the Loop iteration count and the front element of the Queue.
  //This displays the path choices the algorithm took until it was out of the maze
  while(!Queue.empty())
    {

      cout<<"Iteration: "<< n<<" "<< "Choice: " << Queue.front() <<endl;
      Queue.pop();
      n++;
    }
}
