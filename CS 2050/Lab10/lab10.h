#include <stdio.h>
#include <stdlib.h>

typedef struct Queue Queue;

// Complexity: O(1)
Queue* initPQ();
// Complexity: O(n)
void freePQ(Queue *pq);

/* Priority:
 *	In an ascending priority queue, the "maximum" element is the next to dequeue,
 *	whereas in a descending priority queue, the "minimum" element is next.
 */

 #define SECT_D
 typedef struct {
 	float squareFeet;
 	int baths;
 	short houseNumber;
 } House;




 // Complexity: O(n)
 int insertHouseDescendingPQ(Queue *pq, House *house);
 // Complexity: O(1)
 House* peekMinHouse(Queue *pq);
 // Complexity: O(n)
 House* deQueueMinHouse(Queue *pq);
