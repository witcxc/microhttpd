/*
 * =====================================================================================
 *
 *       Filename:  def.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/02/12 17时42分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Chen Xi (happyleaf)
 *   Organization:  
 *
 * =====================================================================================
 */


#include	<stdio.h>
#include	<stdlib.h>

#include <assert.h>
#include <iostream>
#include <string>

using namespace std;


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main(int argc, char *argv[]) {
    assert(1==1);
    fprintf(stderr, "true\n");
    assert(1==1);
    fprintf(stderr, "false\n");
    std::string url = "/test/12345";
    auto first = url.find("/", 0);
    printf("%d\n", first);
    auto second = url.find("/", first + 1);
    printf("%d\n", second);
    printf("%s\n", url.substr(0, second).c_str());
    
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
