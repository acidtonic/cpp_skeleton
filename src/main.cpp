#include <stdio.h>


#include <functional>
#include <memory>
#include <cstdlib>
#include <string>

int main(int argc, char* argv[]) {

    std::unique_ptr< std::function<void()> > functor( 
        new std::function<void()>( [&](void){
            printf("Hello world\n");
        })
    );

    auto functor1 =  [](void) {
        printf("Hello world!\n");
    };

    (*functor)();
    functor1();

    return 0;
} 
