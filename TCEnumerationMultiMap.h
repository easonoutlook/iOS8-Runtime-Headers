/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCEnumerationMultiMap : NSObject  {
    struct __CFDictionary { } *m_valueToString;
    struct __CFDictionary { } *m_stringToValue;
    BOOL m_caseSensitive;
}


- (id)stringForValue:(int)arg1;
- (long)valueForString:(id)arg1;
- (id)initWithStructs:(const struct TCEnumerationStruct { int x1; id x2; }*)arg1 count:(int)arg2;
- (id)initWithStructs:(const struct TCEnumerationStruct { int x1; id x2; }*)arg1 count:(int)arg2 caseSensitive:(BOOL)arg3;
- (void)dealloc;

@end
