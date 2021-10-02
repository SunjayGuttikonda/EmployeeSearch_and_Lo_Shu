#include <string.h> 
#include <stdlib.h> 
#include "employee.h" 

int main(void){ 

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
    PtrToEmployee searchEmployeeByPhoneNumber(PtrToConstEmployee ptr, int sizeTable, char * phoneNumberToFind);
    PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int sizeTable, double salaryToFind);
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries; 
    
    PtrToEmployee matchPtr;

    //Record not found 
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 
    if (matchPtr != NULL) {
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 
    }else{
        printf("Employee ID is NOT found in the record\n"); 
    }
 

    //Record found 
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 
    if (matchPtr != NULL) {
       printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 
    }else {
       printf("Employee Tony Bobcat is NOT found in the record\n"); 
    }
    
    //Phone Number not found
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable,EmployeeTableEntries, "909-559-2134");
    if(matchPtr != NULL){
        printf("Employee with number 909-559-2134 is in the record %d\n", matchPtr-EmployeeTable);
    }else{
        printf("Employee with number 909-559-2134 is NOT found in the record\n");
    }

    //Phone Number found
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable,EmployeeTableEntries, "909-555-2134");
    if(matchPtr != NULL){
        printf("Employee with number 909-555-2134 is in the record %d\n", matchPtr-EmployeeTable);
    }else{
        printf("Employee with number 909-555-2134 is NOT found in the record\n");
    }


    //Salary NOT found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.39);
    if (matchPtr != NULL) {
        printf("Employee salary 6.39 is in record %d\n", matchPtr - EmployeeTable); 
    }else{
        printf("Employee salary is NOT found in the record\n"); 
    }


    //Salary found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.34);

    if (matchPtr != NULL){
        printf("Employee salary 6.34 is in record %d\n", matchPtr - EmployeeTable); 
    }else{
        printf("Employee salary is NOT found in the record\n"); 
    }

    return EXIT_SUCCESS; 
}