class Solution {
public:
    bool divisorGame(int n) {
//         vector<int>ans(n+1,-1);
//         ans[1]=0;
//         for(int i=2;i<=n;i++){
//     int cnt0=0, cnt1=0;
//     for(int j=1;j*j<=i;j++){
//         if(i%j==0){
//             // divisor j
//             if(j < i){  // ignore when j == i
//                 if(ans[i-j]==0) cnt0++;
//                 else cnt1++;
//             }
//             // divisor i/j (different from j)
//             if(j != i/j && i/j < i){
//                 if(ans[i - i/j]==0) cnt0++;
//                 else cnt1++;
//             }
//         }
//     }
//     if(cnt0>0) ans[i]=1;
//     else ans[i]=0;
// }
        if(n%2==0) return 1;
     else return 0;
    }
     
};
