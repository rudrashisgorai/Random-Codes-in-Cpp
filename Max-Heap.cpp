
/***************
 * Following is the main function that er are using internally
 *
 
int main() {
    PriorityQueue pq;
    int choice;
    cin >> choice;
    while(choice != -1) {
        switch(choice) {
            case 1 : // insert
                int element;
                cin >> element;
                pq.insert(element);
                break;
            case 2 : // getMax
                cout << pq.getMax() << endl;
                break;
            case 3 : // removeMax
                cout << pq.removeMax() << endl;
                break;
            case 4 : // size
                cout << pq.getSize() << endl;
                break;
            case 5 : // isEmpty
                if(pq.isEmpty()) {
                    cout << "true" << endl;
                }
                else {
                    cout << "false" << endl;
                }
            default :
                return 0;
        }
        cin >> choice;
    }
}
*******************/

#include <vector>
#include <bits/stdc++.h>
using namespace std;

class PriorityQueue {
	vector<int> pq;

	public :

	PriorityQueue() {

	}

	bool isEmpty() {
		return pq.size() == 0;
	}

	// Return the size of priorityQueue - no of elements present
	int getSize() {
		return pq.size();
	}

	int getMax() {
		if(isEmpty()) {
			return 0;		// Priority Queue is empty
		}
		return pq[0];
	}

	void insert(int element) {
		pq.push_back(element);
		
		int childIndex = pq.size() - 1;

		while(childIndex > 0) {
			int parentIndex = (childIndex - 1) / 2;

			if(pq[childIndex] > pq[parentIndex]) {
				int temp = pq[childIndex];
				pq[childIndex] = pq[parentIndex];
				pq[parentIndex] = temp;
			}
			else {
				break;
			}
			childIndex = parentIndex;
		}

	}
    
    int removeMax(){
        int ans = pq[0];
        pq[0]= pq[pq.size()-1];
        pq.pop_back();;
        int pi = 0 ;
        int lci = 0,rci=0,maxIndex;
        int s = pq.size();
        while(lci < s and rci< s){
            lci = 2* pi + 1;
            rci = 2* pi + 2;         
            if(lci <s and rci> s)
                maxIndex = lci;
            else if(lci > s and rci < s)
                maxIndex = rci ;
            else if(lci < s and rci<s){
                
                if(pq[lci]>pq[rci])
                    maxIndex= lci;
                else maxIndex = rci ;
            	}    
            if(pq[maxIndex]>pq[pi]){
                int temp = pq[maxIndex];
                pq[maxIndex] = pq[pi];
                pq[pi] = temp ;
                
                pi = maxIndex;
            	}
            else break;         
        }          
           return ans;                 
    }
            
            
};
