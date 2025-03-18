#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int input;
    printf("Select your choice: \n");
    printf("1. What is LLM?\n");
    printf("2. What is RAG?\n");
    printf("3. What is GGUF?\n");

    scanf("%d", &input);    

    switch (input)
    {
        case 1:
            printf("A Large Language Model (LLM) is an advanced AI system trained on vast "
                   "amounts of text data to understand, generate, and manipulate human language, "
                   "enabling applications like chatbots, translation, and content creation.\n");
            break;

        case 2:
            printf("RAG stands for Retrieval-Augmented Generation, a model that combines "
                   "the strengths of retrieval and generation models to improve the quality "
                   "and relevance of generated text by incorporating information from external "
                   "sources.\n");
            break;

        case 3:
            printf("GGUF stands for Generative Graded Unfolding, a technique that generates "
                   "text by progressively unfolding the content in a graded manner, allowing for "
                   "more coherent and structured output compared to traditional generative models.\n");
            break;

        default:
            printf("Invalid choice. Please select a valid option.\n");
            break;
    }
    return 0;
}