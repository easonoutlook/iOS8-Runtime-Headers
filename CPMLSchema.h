/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@class NSMutableArray, NSMutableString;

@interface CPMLSchema : NSObject  {
    int yColumnPosition;
    NSMutableString *schemaHeader;
    NSMutableString *schemaHeaderWithType;
    NSMutableArray *attribute;
    NSMutableArray *schemaHDef;
    NSMutableArray *indexColumnList;
    NSMutableArray *nsRemapTable;
    NSMutableArray *schema;
    NSMutableArray *availableOptions;
}

@property(readonly) NSMutableArray * attribute;
@property(readonly) NSMutableArray * indexColumnList;
@property(readonly) NSMutableString * schemaHeader;
@property(readonly) NSMutableString * schemaHeaderWithType;
@property(readonly) NSMutableArray * nsRemapTable;
@property(readonly) NSMutableArray * availableOptions;


- (id)schemaHeader;
- (BOOL)hasOptions:(unsigned int)arg1;
- (BOOL)isNumType:(unsigned int)arg1;
- (BOOL)isColumnContinous:(unsigned long)arg1;
- (id)nsRemapTable;
- (BOOL)isIntType:(unsigned int)arg1;
- (BOOL)isRealType:(unsigned int)arg1;
- (int)getColumnPosition:(id)arg1;
- (BOOL)isVectorType:(unsigned int)arg1;
- (BOOL)isStringType:(unsigned int)arg1;
- (id)indexColumnList;
- (id)schemaHeaderWithType;
- (int)getVectorContent:(unsigned int)arg1;
- (id)getColumnName:(unsigned int)arg1;
- (int)getSchemaType:(unsigned int)arg1;
- (int)getYColumnPosition;
- (unsigned int)getTotalAttributes;
- (id)availableOptions;
- (id)initWithPlist:(id)arg1;
- (void).cxx_destruct;
- (id)init:(id)arg1;
- (id)attribute;

@end
