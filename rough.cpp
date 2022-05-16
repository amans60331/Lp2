// expert system
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  cout<<"\n \n \t \t  Welcome to the covid expert system \t \t \n \n";

  int covidsuspisioncounter = 0;
  int severity=0;
  int oxylevel =0;


  vector<string>ques1 ={
    "what is the temperature of the paitent(float)",
    "what is the oxygen level",
    "how many vaccines does the patient took",
    "what is age "

  };
  vector<string>ques2 = {
    "patient have cough and cold (yes/no)",
    "patient has fever(yes/no)",
    "patient can smell (yes/no)",
    "patient has sour throat (yes/no)",
    "patient has headache(yes/no)",
    "diabetes(yes/no)",

  };
  for (int i = 0; i < ques2.size(); i++) {
        string ans;
        cout<<"\n \t"<<ques2[i];
        cin>>ans;

        if (ans == "yes") {
            covidsuspisioncounter+=1;
        }
        else if ( ans == "no"){
          covidsuspisioncounter+=0;
        }
  }
  for (int i = 0; i < ques1.size(); i++) {
      cout<<"\n \t"<<ques1[i];
      if(i == 0){
        float ans;
        cin>>ans;

        if(ans > 101.1){
          severity +=2;
          covidsuspisioncounter+=1;
        }
        else if(ans < 101.1 && ans > 99.1){
          severity+=1;
          covidsuspisioncounter+=1;
        }
        else{
          severity+=0;

        }

      }
      if (i==1) {
        int ans;
        cin>>ans;
        if(ans>94){
          severity+=0;
          oxylevel =1;

        }
        else if(ans<94 && ans>80){
          severity+=1;
          oxylevel = 2;
        }
        else{
          severity+=2;
          oxylevel =3;
        }
      }
      if(i==2){
        int ans;
        cin>>ans;
        if(ans==0){
          severity+=2;
        }
        else if(ans==1){
          severity+=1;
        }
        else{
          severity +=0;
        }
      }
      if (i==3) {
        int ans;
        cin>>ans;
        if (ans>12 && ans<31) {
          severity+=0;
        }
        else if(ans>31 && ans<55){
          severity+=1;
        }
        else{
          severity+=2;
        }
      }


  }

  cout<<"\n \n \t \t CONCLUSION \t \t \t \n";
  if(covidsuspisioncounter>3){
    cout<<"behenchod positive hai \n";

    if (severity>5) {
       cout<<"are gandu mkc , serious hai randibaaz , hospital bejo jaldi mkc";
    }
    else if (severity<3) {
      cout<<"ghar meh band kara madarchodan ka \n matlab home Quarantine";
    }
    else{
      cout<<"general ward meh chodo ";
    }
  }
  else{
    cout<<"sasura time waste karadiye, nahi hai lawde ko covid";
  }


  return 0;
}
