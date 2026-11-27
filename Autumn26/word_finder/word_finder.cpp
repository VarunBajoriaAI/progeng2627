#include <iostream>
#include <string>
#include <vector>
bool find_word_in_string(const std::string& s,const std::string& word, int& a, int&b)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==word[0])
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[j]!=word[j-i])
                    j=s.size();
                else if(j-i==word.size()-1)
                {    
                    a=i;b=j;
                    return true;
                }
            }
        }
    }
    return false;
}
void create_col_string(const std::vector<std::string>& grid, const int& col, std::string& s)
{
    for(int i=0;i<grid.size();i++)
    {
        s.push_back(grid[i][col]);
    }
}
bool find_word_in_rows(const std::vector<std::string>& grid, std::vector<std::string>& sol, std::string word)
{
    for(int i=0;i<grid.size();i++)
    {
        int a=0,b=0;
        if(find_word_in_string(grid[i],word,a,b))
        {
            int c=0;
            for(;a<=b;a++)
            {
                sol[i][a]=word[c++];
            }
            return true;
        }
    }
    return false;
}
bool find_word_in_cols(const std::vector<std::string>& grid, std::vector<std::string>& sol, std::string word)
{
    for(int i=0;i<grid[0].size();i++)
    {
        int a=0,b=0;
        std::string s;
        create_col_string(grid,i,s);
        if(find_word_in_string(s,word,a,b))
        {
            int c=0;
            for(;a<=b;a++)
            {
                sol[a][i]=word[c++];
            }
            return true;
        }
    }
    return false;
}
void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
)
{
    std::string s;
    for(int i=0;i<grid[0].size();i++)
        s.push_back('#');
    for(int i=0;i<grid.size();i++)
        solution.push_back(s);
    for(int i=0;i<words.size();i++)
    {
        if(find_word_in_cols(grid,solution,words[i])||find_word_in_rows(grid,solution,words[i]))
        {}
        else
            not_found.push_back(words[i]);
    }
}
int main(){

    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    std::vector<std::string> expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }

}