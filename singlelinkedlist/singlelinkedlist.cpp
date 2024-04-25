#include <iostream>
using namespace std;



struct Node {
    int nomhs;
    string name;
    Node* next;
};

Node* START = NULL;

void addNode() {
    int nim;
    string nama;
    Node* nodeBaru = new Node();
    cout << "masukan NIM: ";
    cin >> nim;
    cout << "masukan Nama: ";
    cin >> nama;
    nodeBaru->nomhs = nim;
    nodeBaru->name = nama;

}











int main()
{
    
}

