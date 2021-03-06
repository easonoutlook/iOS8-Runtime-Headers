/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray;

@interface TSWPBibliographySmartField : TSWPSmartField  {
    BOOL _isLocalizable;
    NSArray *_citationRecords;
}

@property(copy) NSArray * citationRecords;
@property BOOL isLocalizable;


- (void)dealloc;
- (id)citationSmartFields;
- (id)citationRecords;
- (void)setIsLocalizable:(BOOL)arg1;
- (BOOL)isLocalizable;
- (BOOL)allowsPasteAsSmartField;
- (void)setCitationRecords:(id)arg1;
- (int)smartFieldKind;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
