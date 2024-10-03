#include <iostream>
#include <vector>
#include <stack>
#define PII pair<int, int>
#define f first
#define s second 
using namespace std;

void merge(vector<int>& a, int l, int r) {
	int m = l + r >> 1;
	vector<int> t;
	int pl = l, pr = m + 1;
	while (pl <= m && pr <= r) {
		if (a[pl] <= a[pr]) t.push_back(a[pl++]);
		else t.push_back(a[pr++]);
	}
	while (pl <= m) t.push_back(a[pl++]);
	while (pr <= r) t.push_back(a[pr++]);
	for (int i = 0; i < t.size(); i++) a[l + i] = t[i];
}

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for (int& x : a) cin >> x;
	
	stack<pair<PII, int>> s;
	
	s.push({{0, n - 1}, 0});
	while (s.size()) {
		int l = s.top().f.f, r = s.top().f.s;
		//cout << l << " " << r << endl;
		if (l == r) {
			s.pop();
		}
		else if (s.top().s == 0) {
			s.top().s = 1;
			s.push({{l,  (l + r) / 2}, 0});
			s.push({{(l + r) / 2 + 1, r}, 0});
		} else {
			merge(a, l, r);
			s.pop();
		}
	}
	
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	return 0;
}
