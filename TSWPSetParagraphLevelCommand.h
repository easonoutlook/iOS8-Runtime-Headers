/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray;

@interface TSWPSetParagraphLevelCommand : TSWPTextCommand  {
    unsigned int _level;
    NSArray *_paragraphDeltas;
}


- (id)actionString;
- (BOOL)process;
- (void)dealloc;
- (int)persistenceKind;
- (void)doCommit;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 level:(unsigned int)arg3;

@end