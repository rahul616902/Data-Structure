#include <iostream>
#include <chrono> // For time measurement

int main() {
    // Record the start time
    auto start = std::chrono::high_resolution_clock::now();

    // Code to measure (for loop up to 1,000,000)
    for (int i = 0; i < 10000; ++i) {
        // Do nothing, just iterate
        for(int j=0;j<10000;j++){
            for(int k=0;k<1000;k++);
        }

    }

    // for(int i=0;i<1000000000;i++){
    //     if(i==1){
    //         std::cout<<"hello";
    //     }
    // }


    // Record the end time
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate the duration
    std::chrono::duration<double> duration = end - start;

    // Output the execution time in seconds
    std::cout << "Execution time for the for loop: " << duration.count() << " seconds" << std::endl;

    return 0;
}
