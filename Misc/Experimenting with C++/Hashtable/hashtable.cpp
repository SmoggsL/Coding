#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;

//Hashtable to implement phone book: 9099, Long

class HashTable {
    private:
        static const int hashGroups = 10;
        list<pair<int,string>> table[hashGroups]; //List 1, Index 0, List 2, Index 1....

    public:
        bool isEmpty() const;
        int hashFunc(int key);
        void insertItem(int key, string value);
        void deleteItem(int key);
        string searchTable(int key);
        void printTable();
};

bool HashTable::isEmpty() const{
    int sum{};
    for (int i{}; i < hashGroups; i++)
    {
        sum += table[i].size(); //counting the total amount of list inside the hashtable
    }
    if (!sum){ // if sum is equal to 0
        return true;
    }
    return false;
}

int HashTable::hashFunc(int key){
    return key % hashGroups;// zB: key = 905, this func will return 5.
}

void HashTable::insertItem(int key, string value){
    int hashValue = hashFunc(key); // Value correspond to key
    auto& cell = table[hashValue];
    auto bItr = begin(cell); // iterator to the beginning of the list
    bool keyExists = false;
    for (; bItr != end(cell); bItr++){ // going through the entire list
        if(bItr -> first == key){ // checking to see if the key exists or not
            keyExists = true;
            bItr -> second = value; // replacing the value in key with new value.
            cout << "[Warning] Key exists. Value replaced" << "\n";
            break;
        }
    }
    //if key doesn't exist, then just push the key and value in the table
    if (!keyExists){
        cell.emplace_back(key,value); 
    }
    return;
}

void HashTable::deleteItem(int key){
    int hashValue = hashFunc(key); // Value correspond to key
    auto& cell = table[hashValue];
    auto bItr = begin(cell); // iterator to the beginning of the list
    bool keyExists = false;
    for (; bItr != end(cell); bItr++){ // going through the entire list
        if(bItr -> first == key){ // checking to see if the key exists or not
            keyExists = true;
            bItr = cell.erase(bItr); // deleting the key
            cout << "[Info] Pair deleted" << "\n";
            break;
        }
    }
    if (!keyExists){
        cout << "[Warning] Item not found. Pair not removed" << "\n";
    }
    return;
}

void HashTable::printTable(){
    for (int i{}; i < hashGroups; i++){
        if (table[i].size() == 0) continue; //if key doesn't exist
        auto bItr = table[i].begin();
        for (; bItr != table[i].end();bItr++){
            cout << "[Info] Key: " << bItr -> first << " Value: " << bItr -> second << "\n";
        }
    }
}

int main(){
    HashTable HT;
    if(HT.isEmpty()) cout << "Code functioned";
    else cout << "ded" << "\n";
    HT.insertItem(1, "Long");
    
    return 0;
}