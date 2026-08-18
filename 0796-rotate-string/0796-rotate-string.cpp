class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        string temp=s+s;
        return temp.find(goal)!=string::npos;//temp me find karti hai goal aur agar mil jati hai to uska index check karti hai (string::npos) ek value jo string header me define hai jiska matlab hai not found 
        // to iska matlab hua agar milta hai man lo 2 to equation banegi 
        // 2!=NOT FOUND -> true
        //gives true then return ho jayega kyunki return likha hai
        // agar nhi mili to 
        //NOT FOUND!=NOT FOUND -> false
        // aissa kuch samajh sakte hain

        
    }
};