 #include<bits/stdc++.h>
// using namespace std;
// typedef long long int lli;

// int main()
// {
//      lli m;
//      string s1,s2,s3;
//      cin>>m>>s1>>s2>>s3;
//      int ans=INT_MIN,j1=0,k1=0;
//      for(int i=0;i<s1.length();i++)
//      {
//         for(int j=j1;j<s2.length();j++)
//         {
//             if(s1[i]==s2[j])
//             {
//                 // cout<<k1<<endl;
//                 for(int k=k1;k<s3.length();k++)
//                 {
//                     if(s3[k]==s1[i])
//                     {
//                         int val=s1[i];
//                         if((i%m)+1==i+1)
//                         {
//                             if((j%m)+1==j+1)
//                         {
//                             if((k%m)+1==k+1)
//                         {
//                             int uff=max(i,max(j,k));
//                           if(ans<=uff)
//                           {
//                             j1=j+1;
//                             k1=k+1;
//                              //cout<<k1<<endl;
//                            ans=uff;
//                           }
//                         }
//                         }
//                         }
//                     }
//                 }
//             }
//         }
//      }

//      int ans1=INT_MIN,j11=0,k11=0;
//      for(int i=0;i<s2.length();i++)
//      {
//         for(int j=j11;j<s3.length();j++)
//         {
//             if(s2[i]==s3[j])
//             {
//                 // cout<<k1<<endl;
//                 for(int k=k11;k<s1.length();k++)
//                 {
//                     if(s1[k]==s2[i])
//                     {
//                         int val1=s1[k];
//                         if((i%m)+1==i+1)
//                         {
//                             if((j%m)+1==j+1)
//                         {
//                             if((k%m)+1==k+1)
//                         {
//                             int uff1=max(i,max(j,k));
//                           if(ans1<=uff1)
//                           {
//                             j11=j+1;
//                             k11=k+1;
//                          //    cout<<k1<<endl;
//                            ans1=min(ans,uff1);
//                           }
//                         }
//                         }
//                         }
//                     }
//                 }
//             }
//         }
//      }
//      if(ans!=INT_MIN)
//      cout<<min(ans,ans1)<<endl;
//      else
//      cout<<"-1"<<endl;
//     return 0;
// }



using namespace std;

int min_seconds_to_align_reels(int M, string& S1, string& S2, string& S3) {
    int min_time = INT_MAX;

    for (int i = 0; i < M; ++i) {
        for (char target_char = '0'; target_char <= '9'; ++target_char) {
            int time = 0;

            for (int j = 0; j < M; ++j) {
                int diff1 = (S1[j] - target_char + 10) % 10;
                int diff2 = (S2[j] - target_char + 10) % 10;
                int diff3 = (S3[j] - target_char + 10) % 10;

                time += min({diff1, diff2, diff3});
            }

            min_time = min(min_time, time);
        }
    }

    return min_time;
}

int main() {
    int M;
    string S1, S2, S3;

    // Input the length M and the three strings S1, S2, S3.
    cin >> M >> S1 >> S2 >> S3;

    int result = min_seconds_to_align_reels(M, S1, S2, S3);

    if (result == INT_MAX) {
        cout << "impossible" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
