/*
https://www.hackerrank.com/challenges/tree-huffman-decoding
*/

/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
    int i = 0;
    node* temp;
    while(i < s.length())
    {
        temp = root;
        while(temp -> data == '\0')
        {
            if(s[i] == '1')
                temp = temp -> right;
            else
                temp = temp -> left;
            i++;
        }
        cout << temp -> data;
    }
}
