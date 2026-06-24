class Solution {
public:
 bool isVowel(char ch){
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
}
    bool halvesAreAlike(string s) {
        int n=s.size();
        int i=0;
        int j=n/2;
        int CountL=0;
        int CountR=0;
        while(i<n/2 && j<n){
            if(isVowel(s[i])) CountL++;
            if(isVowel(s[j])) CountR++;
            i++;
            j++;
        }
    return (CountL==CountR);
    
    }
};