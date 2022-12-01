#define _GLIBCXX_DEBUG     //安全に[]でi番目の要素へのアクセスする方法 => ABC/ARCで他の人の提出を見ると[]を使っている人が多いです。これは[]のほうが短くて読み書きしやすい、または最初に[]を学んで慣れているという理由からです。先に述べたとおり[]はエラーが発見しにくいですが、#define _GLIBCXX_DEBUGとコードの最初に書くことで.atと同程度に安全に使うことができるようになります。
#include <bits/stdc++.h>
using namespace std;

void trace(int A[], int N) {
  for(int i = 0; i < N; i++) {
    if(i > 0) {
      printf("");
      printf("%d", A[i]);
    }
  printf("\n");
  }
}

void insertionSort(int A[],int N) {
  for(int i = 1; i < N-1; i++) {     //最初は最左値を基準にするためi=1で初期化
    int v = A[i];
    int j = i-1;

    while(j >= 0 && A[j] > v) {
      A[j] = A[i];
      j--;
    }
    A[j+1] = v;
    trace(A, N);
  }
}

int main(){
  int N;
  cin >> N;
  int A[100];

  trace(A, N);
  insertionSort(A, N);

  return 0;
}