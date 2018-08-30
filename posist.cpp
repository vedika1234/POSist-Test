#include<iostream.h>
#include <bits/stdc++.h>
#define nodenum=0
using namespace std;
struct Node
{
     string time;
    int nodeNumber;
    string data;
    string nodeId;
    string referenceNodeId;
    string childReferenceNodeId;// assuming there is only 1 child
    string genesisReferenceNodeId;
    string HashValue;
    vector<Node*>child;
};
struct genesis
{
    int value;
   vector <Node*> child;

};
genesis* creategenesis(genesis * root,int value)
{
     Node *temp = new Node;
     temp->key = key;
     return temp;

}
Node*createnode(int data)
{
    Node *temp = new Node;
     temp->value = value;
     temp->nodeNumber=nodenum;
     nodenum++;
     cin>>temp->nodeId;
     temp->child=NULL:
     return temp;
}
void insertnode(Node * root)
{
    if (root==NULL)
        return;


    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();


        while (n > 0)
        {
            Node * p = q.front();
            q.pop();
            cout << p->key << " ";

            for (int i=0; i<p->child.size(); i++)
                q.push(p->child[i]);
            n--;
        }

        cout << endl;
    }
}
void inserchild(int data,genesis * root)
{
    Node* ptr=root->child;
    Node* ptr1=NULL;
    while(ptr!=NULL || ptr->value!-data)
    {
        ptr1=ptr;
        ptr=ptr->child;
    }
    //ptr1 keep strack of ptr
    int data;
    cin>>data;
    createnode(data);
    insertnode(ptr1);

}

int main()
{
    int rootdata;
    cin>>rootdata;
    genesis *root=creategenesis(rootdata);
    int ndata[100]={0};
    int i=0;
    /*1. Create the Genesis Node. Genesis Node has parent node as null.
2. Create set of child nodes of a particular node.
3. Create a child node that originates from a particular node.
4. Encrypt and decrypt the data inside the node.
5. Verify the owner of the node, with the encryption key. Symmetric encryption shows the data. The
integrity of the data is checked by computing the hash value of the data and checking with the
already computed hash.
6. Edit value of a node. Editing can have many forms, edit value of a subtree root, trickle down the
subtree node value to a set of children, or one child or edit value of a leaf node.
7. Transfer ownership of a particular node value. The previous owner validates his/her ownership by
decrypting the data, and comparing the hash values. The new owner then encrypts the data with his
key.
8. Find the longest chain of the genesis node.
9. Find the longest chain of any node.
10. Merge 2 nodes; data is added of the 2 nodes, ownership of the longer chain node are retained after a
merge operation
*/
    while(x)
    {
        int data;
        cin>>data;
        int k=i;
         int sum=0;
        while(k--)
        {

            sum=sum+ndata[k];
        }
        if(data<=rootdata-sum)
        {

            Node * newnode=createnode(data);
            insertnode(root,newnode);
        }

    }
//3. Create a child node that originates from a particular node
cin>>data;
//enter dta of the root node
insertchild(data,root);
}
