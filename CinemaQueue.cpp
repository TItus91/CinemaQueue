#include <string>
#include <vector>

std::string tickets(const std::vector<int>& peopleInLine) {
 int bill_25=0;
 int bill_50=0;
 int bill_100=0;
 for (auto i: peopleInLine) 
   {
   switch (i)
     {
   case 25: bill_25+=1; break;
   case 50: 
       {
         bill_50+=1;
         bill_25-=1;
         }; break;
  case 100: 
       {
         bill_100+=1;
         if (bill_50>0) 
           {
           bill_50-=1;
           bill_25-=1;
           }
         else bill_25-=3;
         }; break;
       }
   if (bill_25<0 || bill_50<0) return "NO";     
 }
  return "YES";
}
