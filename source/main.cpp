//  Lab04_Vectors_and_matrices

#include <iostream>

// Include the glm library
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <glm/gtx/io.hpp>

int main()
{
    std::cout << "Lab 4 Vectors and Matrices\n--------------------------\n" << std::endl;
    
    // Defining a vector
    glm::vec3 u(2.0f, 2.0f, 1.0f);
    
    std::cout << "Defining a vector\n-----------------" << std::endl;
    std::cout << "u = " << u << std::endl;
    
    return 0;
}
