/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDFormula, OADGraphicProperties, EDResources;

@interface CHDTrendlineLabel : NSObject  {
    EDResources *mResources;
    CHDFormula *mName;
    unsigned int mLastCachedNameStringIndex;
    unsigned int mContentFormatId;
    boolmGeneratedText;
    boolmAutomaticLabelDeleted;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)trendlineLabelWithResources:(id)arg1;

- (bool)isAutomaticLabelDeleted;
- (bool)isGeneratedText;
- (void)setStringIndex:(unsigned int)arg1;
- (unsigned int)stringIndex;
- (void)setContentFormat:(id)arg1;
- (void)setAutomaticLabelDeleted:(bool)arg1;
- (void)setGeneratedText:(bool)arg1;
- (void)setName:(id)arg1 chart:(id)arg2;
- (void)setLastCachedName:(id)arg1;
- (id)initWithResources:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setContentFormatId:(unsigned int)arg1;
- (id)lastCachedName;
- (id)contentFormat;
- (unsigned int)contentFormatId;
- (id)graphicProperties;
- (id)name;
- (void)dealloc;

@end
