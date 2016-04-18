#include <algorithm>
#include "utils.hpp"

static int   no_spaces_duplicates(std::string & str) {
   int i = 0;

   while (str[i + 1] != '\0') {
      if (str[i] == ' ' && str[i + 1] == ' ') {
         while (str[i] != '\0') {
            str[i] = str[i + 1];
            i++;
         }
         return (1);
      }
      i++;
   }
   return (0);
}

static void  no_space_in_begining(std::string & str) {
   int i = 0;

   if (str[0] == ' ') {
      while (str[i] != '\0') {
         str[i] = str[i + 1];
         i++;
      }
   }
}

static void  no_space_in_end(std::string & str) {
   int i = 0;

   while (str[i + 1] != '\0') {
      i++;
   }
   if (str[i] == ' ') {
      str[i] = '\0';
   }
}

void  epur_str(std::string & str) {
   int ret = 1;
   std::string output;

   str += '\0';
   std::replace(str.begin(), str.end(), '\t', ' ');
   while (ret == 1) {
      ret = no_spaces_duplicates(str);
   }
   no_space_in_begining(str);
   no_space_in_end(str);
   if (str.size() != 0 && str[0] == '\0') {
      str.clear();
   }
   for(size_t i = 0; i < str.size(); ++i) {
      if(str[i] != '\0') {
         output += str[i];
      }
   }
   output + '\0';
   str = output;
}
