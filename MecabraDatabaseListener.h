/* Generated by RuntimeBrowser.
   Image: /usr/lib/libmecabra.dylib
 */

@interface MecabraDatabaseListener : NSObject  {
    struct LearningDictionary { struct __CFString {} *x1; int x2; unsigned char x3; unsigned char x4; double x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; struct LearningDictionaryTrie {} *x7; struct vector<EntryField, std::__1::allocator<EntryField> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<EntryField *, std::__1::allocator<EntryField> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; void *x9; void *x10; void *x11; int x12; void *x13; } *target;
}


- (id)initWithLearningDictionary:(struct LearningDictionary { struct __CFString {} *x1; int x2; unsigned char x3; unsigned char x4; double x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; struct LearningDictionaryTrie {} *x7; struct vector<EntryField, std::__1::allocator<EntryField> > { struct { /* ? */ } *x_8_1_1; struct { /* ? */ } *x_8_1_2; struct __compressed_pair<EntryField *, std::__1::allocator<EntryField> > { struct { /* ? */ } *x_3_2_1; } x_8_1_3; } x8; void *x9; void *x10; void *x11; int x12; void *x13; }*)arg1;
- (void)databaseShouldRefresh;
- (void)databaseChanged;
- (void)dealloc;

@end