/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPDateTimeSmartField;

@interface TSWPInsertDateTimeFieldCommand : TSWPTextCommand  {
    TSWPDateTimeSmartField *_dateTimeField;
}


- (void)dealloc;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 dateTimeField:(id)arg3;
- (int)persistenceKind;
- (void)doCommit;

@end
