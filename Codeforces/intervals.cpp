#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
bool **reachable;

struct node 
{
	int start;	
	int end;
	struct node *next;
};

void create_edge(struct node *list, int node1, int node2, int totalint)
{
	/*struct node *current = &list[node1];
	struct node *temp = current;
	int start = list[node2].start;
	int end = list[node2].end;
	while (temp->next != NULL)
		temp = temp->next;
	current = (struct node *)malloc(sizeof(struct node));
	current ->next = temp->next;
	current -> start = start;
	current -> end = end;*/
	for (int i=0;i<totalint;i++)
		if(reachable[node2][i]) reachable[node1][i] = 1;


}

/*void findchildrn(int currset[][2], int newentry, int *parent, int total)
{
	int i;
	parent [newentry] = newentry;
	for (i=0;i<total;i++)
	{
		if(parent[i] != i) continue;
		if (list[i].start > currset[newentry][0] && list[i].end < currset[newentry][1])
			parent[i] = newentry; 
	}

	
}
*/
int main()
{
	int n,i;
	int choice;
	struct node *list;
	int start, end;
	cin >> n;
//	int currset[n][2];
	int parent[n];
	list = (struct node *)malloc(sizeof(struct node)*n);
	reachable = (bool **)malloc(sizeof(bool *)*n);
	for (i=0;i<n;i++)
		reachable[i] = (bool *)malloc(sizeof(bool)*n);
	for (i=0;i<n;i++) reachable[i][i] = 1;
	int totalint=0;
	for (i=0;i<n;i++)
	{
		cin >> choice;
		cin >> start;
		cin >> end;
		if (choice == 1)
		{
			list[totalint].start = start;
			list[totalint].end = end;
			for (int j=0; j<totalint;j++)
				{
					if((list[i].start > start && list[i].start < end) || (list[i].end > start && list[i].end < end))
						create_edge(list,totalint,i,totalint+1);
					if ((start > list[i].start && start < list[i].end) || (end > list[i].start && end < list[i].end))
						create_edge(list,i,totalint,totalint+1);
				}
			totalint++;
		}
		if (choice == 2)
		{
			start--;
			end--;
		/*	for (int i = 0; i<totalint; i++)
					cout << list[i].start << ' ' << list[i].end << '\t' << parent[i] << '\n';
			while (start != parent[start])
			{
				if (parent[start] == end)
				{
					cout << "YES\n";
					break;
				}
				start = parent[start];
			}				
			if (start == parent[start])
				cout << "NO\n";*/
			if (reachable[start][end]) cout << "YES\n";
			else cout << "NO\n";
		}	
	}	
	return 0;
}