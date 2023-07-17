#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#define Word_Size (26)

struct TrieNode
{

    struct TrieNode *children[Word_Size];
    int isLeaf;

};

struct TrieNode *getNode(void);

void progressBar(int progress, int total);

void insertInTrie(struct TrieNode *root, const char *key);

bool searchInTrie(struct TrieNode *root, const char *key); 

void autocorrectWord_swap(struct TrieNode *root,char word[100]); 

void autocorrectWord_repeat(struct TrieNode *root,char word[100]); 

void autocorrectWord_letter(struct TrieNode *root,char word[100]);  

void autocorrectWord_hiddenletter(struct TrieNode *root,char word[100]); 

void replaceWordInFile(FILE *file, const char *word, const char *replacement);

void findAndReplace_inTrie(FILE *file, struct TrieNode *root);

void display_CorrectFile();

void count_Incorrect(FILE *file, struct TrieNode *root);

void findWithString(const char *filename , struct TrieNode *root);

void view_original_wordFile(const char *filename);

void freeTrie(struct TrieNode *node) ;

void get_Fileinfo(const char *filename, struct TrieNode *root);

void get_CodeComplexity(const char *filename, struct TrieNode *root);

void find_with_Character(FILE *file, struct TrieNode *root);

void Append_inFile(const char *filename);

void find_With_Substring(const char *filename);