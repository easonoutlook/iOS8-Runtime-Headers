/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, NSArray;

@interface TSPPasteboard : NSObject  {
    id _pasteboard;
}

@property(copy) NSString * string;
@property(readonly) NSArray * strings;
@property(readonly) NSArray * richTextStrings;
@property(readonly) NSArray * URLs;
@property(readonly) int numberOfItems;
@property(readonly) NSString * name;
@property(readonly) int changeCount;
@property(readonly) BOOL isSmartCopy;

+ (id)pasteboardWithUniqueName;
+ (id)pasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)generalPasteboard;
+ (id)stylePasteboard;
+ (id)pasteboardWithPasteboard:(id)arg1;
+ (id)activePasteboardForName:(id)arg1;
+ (Class)pasteboardClass;
+ (id)activePasteboards;
+ (id)activePasteboardsQueue;

- (void).cxx_destruct;
- (id)URLs;
- (id)strings;
- (void)addItems:(id)arg1;
- (id)dataForPasteboardType:(id)arg1;
- (BOOL)containsPasteboardTypes:(id)arg1;
- (id)pasteboardTypes;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (int)numberOfItems;
- (void)setString:(id)arg1;
- (int)changeCount;
- (id)string;
- (oneway void)invalidate;
- (id)name;
- (id)description;
- (BOOL)fromIWorkSageDataSource;
- (BOOL)fromExcelDataSource;
- (BOOL)isSmartCopy;
- (BOOL)containsImportableTextTypes;
- (BOOL)containsImportableRichTextTypes;
- (id)importablePlainTextTypes;
- (id)importableImageTypes;
- (id)importableRichTextTypes;
- (void)addData:(id)arg1 forPasteboardType:(id)arg2;
- (void)performAsynchronousWriteUsingBlock:(id)arg1;
- (BOOL)containsAnyPasteboardTypeInArray:(id)arg1;
- (id)richTextStrings;
- (id)initWithNativePasteboard:(id)arg1;
- (id)initWithUniquePasteboardName;
- (id)initWithPasteboardName:(id)arg1 create:(BOOL)arg2;
- (id)initWithGeneralPasteboard;
- (BOOL)containsNativePasteboardTypes;
- (void)addItems:(id)arg1 isSmartCopy:(BOOL)arg2;
- (int)clearContents;

@end
