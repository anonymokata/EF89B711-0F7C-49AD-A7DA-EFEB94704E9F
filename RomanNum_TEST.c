/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "RomanNum_TEST.check" instead.
 */

#include <check.h>

#line 1 "RomanNum_TEST.check"
#include "RomanNum.h"
#include<string.h>

int match;

START_TEST(WhenSingleRomanNumIsPassedACharReturnThatChar)
{
#line 7
	//match = strcmp(RomanNum("I"),"I");	
	//fail_unless(match == 0, "When RomanNum is passed a char it does not returns a char");
	fail_unless(1,"Phase one complete");

}
END_TEST

START_TEST(WhenMultiRomanNumIsPassedTheyAreReturned)
{
#line 12
	//match = strcmp(RomanNum("XVI"),"XVI");	
	//fail_unless(match == 0, "When RomanNum is passed a char it does not returns a char");
	fail_unless(1,"Phase one complete");

}
END_TEST

START_TEST(FirstAddOfOnePlusOne)
{
#line 17
	match = strcmp(RomanNum("I","I"), "II");
	fail_unless(match == 0, "Simple add of one plus one");	

}
END_TEST

START_TEST(UnpackAndConcatenateRomanNum)
{
#line 21
	//match = strcmp(RomanNum("CCCLXIX","DCCCXLV"), "CCCXXXXXXIIIIIIIIICCCCCCCCXXXXIIIII");
	//fail_unless(match == 0, "1st step in adding two roman num's together is to concatenate and then unpack the concatenated number into I X C and M");
	fail_unless(1,"omitting test for 1st step of addition"); 

}
END_TEST

START_TEST(SortTheUnpackedRomanNum)
{
#line 26
	//match = strcmp(RomanNum("CCCLXIX","DCCCXLV"), "CCCCCCCCCCCXXXXXXXXXXIIIIIIIIIIIIII");
	//fail_unless(match == 0,"2nd step in adding two roman num's is to sort the unpacked num");
	fail_unless(1,"omitting test for 2nd step of addition"); 

}
END_TEST

START_TEST(CompressTheSortedRomanNum)
{
#line 31
	match = strcmp(RomanNum("CCCLXIX","DCCCXLV"), "MCCXIV");
	fail_unless(match == 0,"3rd and final step of addition, to compress the sorted Roman Num");

}
END_TEST

START_TEST(Subtraction)
{
#line 35
	match = strcmp(RomanNum("XLIII","CXXIX"), "LXXXVI");
	fail_unless(match == 0,"Subtraction, to Subtraction smaller numeral must be in front of a larger one.");

}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, WhenSingleRomanNumIsPassedACharReturnThatChar);
    tcase_add_test(tc1_1, WhenMultiRomanNumIsPassedTheyAreReturned);
    tcase_add_test(tc1_1, FirstAddOfOnePlusOne);
    tcase_add_test(tc1_1, UnpackAndConcatenateRomanNum);
    tcase_add_test(tc1_1, SortTheUnpackedRomanNum);
    tcase_add_test(tc1_1, CompressTheSortedRomanNum);
    tcase_add_test(tc1_1, Subtraction);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
