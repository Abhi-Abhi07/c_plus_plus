#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode *children[256];
    bool isTerminal;
    TrieNode(char ch){
        data=ch;
        for(int i=0; i<256; i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class Trie{
    public:
    TrieNode* root;
    Trie(){
        root=new TrieNode('\0');
        cout<<(int)root->data<<endl;
    }

    void insertUtilWord(TrieNode* root, string word){
        if(word.length()==0){
            root->isTerminal=true;
            cout<<"\n*******"<<endl;
            cout<<root->data<<" "<<root->isTerminal<<endl; 
            return ;
        }

        // Assume all word are CAPS
        // int index=word[0]-'A';//ise use karne ke liye childern arr ki length 26 kar dena (in Trie class)

        // All character are allow
        int index=word[0]-'\0';
        TrieNode* child;

        // Present
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        // Absent
        else{
            child=new TrieNode(word[0]);
            cout<<child->data<<" "<<child->isTerminal<<endl;
            root->children[index]=child;
        }

        // Recursive call
        insertUtilWord(child,word.substr(1));

    }

    void insertWord(string word){
        insertUtilWord(root,word);
    }

    bool searchUtilWord(TrieNode* root,string word){
        if(word.length()==0){
            return root->isTerminal;
        }

        int index=word[0]-'\0';
        TrieNode *child;

        // present
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        // Absent
        else{
            return false;
        }
        // Recursive call
        return searchUtilWord(child,word.substr(1));
    }
    void searchWord(string word){
        if(searchUtilWord(root,word)){
            cout<<"Word("<<word<<") is Present !"<<endl;
        }
        else{
            cout<<"Word("<<word<<") is Absent !\n";
        }
    }

    void deleteWord(TrieNode *root,string word){
        if(word.length()==0){
            cout<<"\n\n"<<root->data<<" "<<root->isTerminal<<endl;
            root->isTerminal=false;
            cout<<"\n\n"<<root->data<<" "<<root->isTerminal<<endl;
            return;
        }
        int index=word[0];
        TrieNode *child;
        child=root->children[index];
        deleteWord(child,word.substr(1));
        bool isPresent=false;
        cout<<"**"<<child->data<<endl;
        // woord ke aage kuch present hai ya nhi
        for(int i=0; i<256; i++){
            if(!root->children[index] && root->children[index]->children[i]!=NULL){
                isPresent=true;
            }
        }
        if(isPresent==false && !child->isTerminal){
            delete(child);
            root->children[index]=NULL;
            // yha child or root->children[index] ek hi baat hai
        } 
    }
    void deletionWord(string word){
        if(searchUtilWord(root,word)){
            deleteWord(root,word);
        }
        else{
            cout<<"Word "<<"("<<word<<") are not exits !\n";
        }
    }
    void verifyForCompleteDeletion(){
        // char ch='D';
        // int index=int(ch);
        // if(root->children['D']->children['O']->children['M']==NULL){
        //     cout<<"Yes it is NULL\n";
        // }
        // else{
        //     cout<<"its not NULL\n";
        // }
        // if(root->children['D']->children['O']->children['M']->isTerminal){
        //     cout<<"Yes it isTerminal is true\n";
        // }
        // else{
        //     cout<<"Yes it isTerminal is false\n";
        // }
        // cout<<root->children['D']->children['O']->children['M']->data<<endl;
        for(int i=0; i<256; i++){
            if(root->children[i]!=NULL){
                cout<<root->children[i]->data<<endl;
            }

        }
    }
};

int main(){
    Trie *t=new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("DOKER");
    t->insertWord("DOM");
    // t->insertWord("TIM");
    // t->insertWord("TIME");
    cout<<endl;
    // t->searchWord("TIM");
    // t->searchWord("DOG");
    // t->searchWord("DO");
    t->deletionWord("ARM");
    cout<<"\nAfter Deletion !\n";
    t->searchWord("DO");
    t->searchWord("DOM");
    t->searchWord("DOKER");
    cout<<endl<<"Complete\n"<<endl;
    // t->verifyForCompleteDeletion();
return 0;
}