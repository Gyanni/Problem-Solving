//
// Created by Gyanni on 2025. 1. 8..
//
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (c <= b) {
    cout << -1 << endl;
    return 0;
  }

  cout << a / (c - b) + 1 << endl;
  return 0;
}
