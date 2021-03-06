/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSCHMutableNumberFormat : TSCHNumberFormat <TSCHCustomFormatPasteSupport> {
}

@property int formatType;
@property unsigned int decimalPlaces;
@property(copy) NSString * currencyCode;
@property BOOL useAccountingStyle;
@property int negativeStyle;
@property BOOL showThousandsSeparator;
@property int fractionAccuracy;
@property(copy) NSString * prefixString;
@property(copy) NSString * suffixString;
@property unsigned int base;
@property unsigned int basePlaces;
@property BOOL baseUseMinusSign;


- (void)setValueType:(int)arg1;
- (void)setFormatType:(int)arg1;
- (void)setBasePlaces:(unsigned int)arg1;
- (void)setUseAccountingStyle:(BOOL)arg1;
- (void)setFractionAccuracy:(int)arg1;
- (void)setShowThousandsSeparator:(BOOL)arg1;
- (void)setNegativeStyle:(int)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setSuffixString:(id)arg1;
- (void)setPrefixString:(id)arg1;
- (void)setDecimalPlaces:(unsigned int)arg1;
- (void)setBase:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBaseUseMinusSign:(BOOL)arg1;
- (void)p_setFractionAccuracy:(int)arg1;
- (id)p_formatTypeAffectedPropertyKeys;
- (void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;

@end
