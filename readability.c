#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

float coleman_liau_index(int letters, int words, int sentences);
int count_sentences(string text);
int count_words(string text);
int count_letters(string text);

int main(void)
{
    // Get users input
    string text = get_string("Input: ");

    // Count letters, word, and sentences
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    //
    float index = coleman_liau_index(letters, words, sentences);

    // Determine grade level
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        int grade_level = round(index);

        printf("Grade %d\n", grade_level);
    }
}

int count_letters(string text)
{
    // Initialize letter_count to 0
    int count_letter = 0;

    // return the number of letters in text
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
        {
            count_letter++;
        }
    }

    return count_letter;
}

int count_words(string text)
{
    int count_word = 1;

    // Loop through each word for spaces
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] == ' ')
        {
            count_word++;
        }
    }

    return count_word;
}

int count_sentences(string text)
{
    int count_sentence = 0;

    // Loop through each word for ?!.
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            count_sentence++;
        }
    }

    return count_sentence;
}

float coleman_liau_index(int letters, int words, int sentences)
{
    // Calculate L and S
    float L = ((float) letters / words) * 100;
    float S = ((float) sentences / words) * 100;

    // Calculate Coleman
    float index = 0.0588 * L - 0.296 * S - 15.8;

    return index;
}
