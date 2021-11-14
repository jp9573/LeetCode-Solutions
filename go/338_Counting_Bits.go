// https://leetcode.com/problems/counting-bits/

func countBits(n int) []int {
    A := make([]int,n+1)
    for i:=1;i<=n;i++{
        A[i] = A[i-(i&(-i))]+1;
    }
    return A;
}
