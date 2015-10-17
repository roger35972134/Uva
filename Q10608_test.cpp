#include <cstdio>
using namespace std;

int Set[30010]; // Set[i]��i�onode��father node,Set�̤W�h��Set[root]=root
int Num[30010];   // �HN[i]��root��Set���X��element

void Set_Initial(int N);
int FindRoot(int x);
void Union(int x, int y);
int FindLargest(int N);

int main()
{
    int Case, N, M, A, B;
    scanf("%d", &Case);
    while (Case--) {
        scanf("%d %d", &N, &M);
        Set_Initial(N);
        while (M--) {
            scanf("%d %d", &A, &B);
            Union(A, B);
        }
        printf("%d\n", FindLargest(N));
    }
}
void Set_Initial(int N)
{
    for (int i = 1; i <= N; ++i) {
        Set[i] = i;
        Num[i] = 1;
    }
}
int FindRoot(int x)
{
    if (x == Set[x])
        return x;
    return Set[x] = FindRoot(Set[x]);
}
void Union(int x, int y)
{
    x = FindRoot(x);
    y = FindRoot(y);

    if (x != y) {
        Set[x] = y;
        Num[y] += Num[x];
    }
}
int FindLargest(int N)
{
    int Max = 0;
    for (int i = 1; i <= N; ++i)
        if (Num[i] > Max)
            Max = Num[i];
    return Max;
}
