#include<iostream>
#include<vector>

using namespace std;

template<class T>
T max(vector<T>& v) {
	T maks = v[0];
	for (int i = 0; i < v.size(); i++) {
		if (i % 3 == 0) {
			if (maks < v[i]) {
				maks = v[i];
			}
		}
	}
	return maks;
}
int main() {
	vector<int> niz;
	niz.push_back(1); //0 indeks
	niz.push_back(2); //1
	niz.push_back(3); //2
	niz.push_back(4); //3
	niz.push_back(5); //4
	niz.push_back(6); //5
	niz.push_back(1); //6
	cout << "Stampanje liste:" << endl;
	for (int i = 0; i < niz.size(); i++) {
		cout << niz[i] << endl;
	}
	cout << "Najveci element liste ciji je indeks deljiv sa 3 :" << endl;
	cout << max(niz) << endl;
}