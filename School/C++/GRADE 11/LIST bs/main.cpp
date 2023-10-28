#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n;

struct Node{
    int value;
    Node *next, *prev;
};

struct List{
    Node *head,*tail;
};
List *init()
{
    List *p = new List;
    p->head = nullptr;
    p->tail = nullptr;
    return p;
};
void append_value(List *l, int val)
{
    if (!l->tail) {
		l->head = new Node;

		l->head->value = val;
		l->head->prev = nullptr;
		l->head->next = nullptr;

		l->tail = l->head;
		return;
	} else {
		Node* p = new Node;

		p->value = val;
		p->prev = l->tail;
		p->next = nullptr;

		l->tail->next = p;
		l->tail = p;
		return;
    }
}

int main() {
    // freopen("main.INP","r",stdin);
    // freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    ll a[n+1];
    for (int i = 0; i < n; i++)
    {
       cin >> a[i];
    }
    // cout << sum_array(a,n);
    // f(&n);`
    // cout << S
    return 0;
}