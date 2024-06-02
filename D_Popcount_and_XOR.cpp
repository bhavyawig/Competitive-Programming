// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int lli;

// int main()
// {
//    lli a,b,c;
//    cin>>a>>b>>c;
//    string fir="",sec="";
//    string str="";
//    for (int i = 61; i >= 0; i--) {
//         int k = c>> i;
//         if (k & 1)
//            str+="1";
//         else
//             str+="0";
//     }
//     reverse(str.begin(),str.end());
//    cout<<str;
//     lli fuc=0,sex=0;
//     lli no=0;
//     for(lli i=0;i<str.length();i++)
//     {
//         if(str[i]=='1')
//         {
//             if(fuc<sex && fuc<a && sex<b)
//             {
//                 fir+="1";
//                 sec+="0";
//                 fuc++;
//             }
//             else if(sex<fuc && sex<b && fuc<a)
//             {
//                 fir+="0";
//                 sec+="1";
//                 sex++;
//             }
//             else if(fuc<a)
//             {
//                 fir+="1";
//                 sec+="0";
//                 fuc++;
//             }
//             else if(sex<b)
//             {
//                 fir+="0";
//                 sec+="1";
//                 sex++;
//             }
//             else
//             {
//                 no++;
//                 break;
//             }
//         }
//         else
//         {
//             if(fuc<a && sex<b)
//             {
//                 fir+="1";
//                 sec+="1";
//                 fuc++;sex++;
//             }
//             else
//             {
//                 fir+="0";
//                 sec+="0";
//             }
//         }
//     }
//         reverse(fir.begin(),fir.end());
//         reverse(sec.begin(),sec.end());
//     lli no1=stoll(fir, nullptr, 2);
//     lli no2=stoll(sec, nullptr, 2);
//     if(no!=0) cout<<"-1"<<endl;
//     else
//     cout<<no1<<" "<<no2<<endl;
// }
