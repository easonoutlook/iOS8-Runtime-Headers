/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSNumber, NSString;

@interface NSNumber : NSValue <CKRecordValue, PQLBindable, PQLResultSetInitializer, TSCHChartGridValue, TSDMixing> {
}

@property(readonly) int chartGridValueType;
@property(readonly) BOOL brc_isFolderID;
@property(readonly) BOOL brc_isDocumentID;
@property(readonly) NSNumber * brc_folderID;
@property(readonly) NSNumber * brc_documentID;
@property(readonly) unsigned long long brc_rawID;
@property(readonly) struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; } decimalValue;
@property(readonly) BOOL charValue;
@property(readonly) unsigned char unsignedCharValue;
@property(readonly) short shortValue;
@property(readonly) unsigned short unsignedShortValue;
@property(readonly) int intValue;
@property(readonly) unsigned int unsignedIntValue;
@property(readonly) long longValue;
@property(readonly) unsigned long unsignedLongValue;
@property(readonly) long long longLongValue;
@property(readonly) unsigned long long unsignedLongLongValue;
@property(readonly) float floatValue;
@property(readonly) double doubleValue;
@property(readonly) BOOL boolValue;
@property(readonly) int integerValue;
@property(readonly) unsigned int unsignedIntegerValue;
@property(copy,readonly) NSString * stringValue;

+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (id)numberWithLong:(long)arg1;
+ (id)numberWithUnsignedLong:(unsigned long)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)numberWithInteger:(int)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithBool:(BOOL)arg1;
+ (id)numberWithUnsignedInteger:(unsigned int)arg1;
+ (id)numberWithInt:(int)arg1;
+ (id)numberWithItemIdentifier:(unsigned long long)arg1;
+ (BOOL)parseString:(id)arg1 intoNSUInteger:(unsigned int*)arg2;
+ (BOOL)parseString:(id)arg1 intoNSInteger:(int*)arg2;
+ (BOOL)parseString:(id)arg1 intoUInt64:(unsigned long long*)arg2;
+ (BOOL)parseString:(id)arg1 intoSInt64:(long long*)arg2;
+ (id)boolFromICSString:(id)arg1;
+ (id)cr_numberWithCRContactID:(long long)arg1;
+ (id)cr_numberWithCRRecentID:(long long)arg1;
+ (id)_gkServerTimeInterval:(double)arg1;
+ (id)numberWithCGFloat:(float)arg1;
+ (id)brc_fileObjectIDWithDocumentID:(unsigned int)arg1;
+ (id)brc_fileObjectIDWithFolderID:(unsigned long long)arg1;
+ (id)brc_fileObjectIDForURL:(id)arg1 allocateDocID:(BOOL)arg2;
+ (id)numberWithCGFloat:(float)arg1;
+ (id)numberWithCGFloat:(float)arg1;
+ (id)instanceWithArchive:(const struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; double x3; int x4; unsigned int x5[1]; }*)arg1 unarchiver:(id)arg2;
+ (id)numberWithCGFloat:(float)arg1;
+ (id)numberWithStyleInt:(int)arg1;
+ (id)numberWithStyleProperty:(int)arg1;

- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)initWithUnsignedChar:(unsigned char)arg1;
- (id)initWithUnsignedShort:(unsigned short)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (BOOL)isEqualToNumber:(id)arg1;
- (BOOL)charValue;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithUnsignedLong:(unsigned long)arg1;
- (unsigned char)unsignedCharValue;
- (id)initWithUnsignedInteger:(unsigned int)arg1;
- (id)initWithInteger:(int)arg1;
- (short)shortValue;
- (id)initWithDouble:(double)arg1;
- (id)initWithFloat:(float)arg1;
- (long)longValue;
- (id)initWithBool:(BOOL)arg1;
- (unsigned long long)unsignedLongLongValue;
- (id)initWithInt:(int)arg1;
- (id)stringValue;
- (int)compare:(id)arg1;
- (long long)longLongValue;
- (unsigned int)unsignedIntegerValue;
- (id)initWithLong:(long)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)integerValue;
- (double)doubleValue;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long)unsignedLongValue;
- (unsigned int)unsignedIntValue;
- (int)intValue;
- (BOOL)boolValue;
- (float)floatValue;
- (id)description;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (id)initWithChar:(BOOL)arg1;
- (id)initWithShort:(short)arg1;
- (BOOL)_allowsDirectEncoding;
- (unsigned long)_cfTypeID;
- (bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;
- (int)_reverseCompare:(id)arg1;
- (unsigned char)_getValue:(void*)arg1 forType:(long)arg2;
- (long)_cfNumberType;
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (unsigned short)unsignedShortValue;
- (BOOL)isNSNumber__;
- (id)localizedString;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (float)CA_distanceToValue:(id)arg1;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; boolx10; }*)arg4;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;
- (unsigned long long)itemIdentifierValue;
- (id)initWithItemIdentifier:(unsigned long long)arg1;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;
- (id)MPMediaLibraryDataProviderSystemML3CoercedString;
- (void)_ICSFBTypeAppendingToString:(id)arg1;
- (void)_ICSUTCOffsetAppendingToString:(id)arg1;
- (void)_ICSBoolAppendingToString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (long long)cr_CRContactIDValue;
- (long long)cr_CRRecentIDValue;
- (id)initWithCGFloat:(float)arg1;
- (float)cgFloatValue;
- (id)brc_folderID;
- (id)brc_documentID;
- (BOOL)brc_isDocumentID;
- (BOOL)brc_isFolderID;
- (unsigned long long)brc_rawID;
- (id)__ck_localizedString;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (BOOL)isFloatingPointType;
- (float)CGFloatValue;
- (void)appendJsonStringToString:(id)arg1;
- (BOOL)WF_isEqualToNumber:(id)arg1 withPrecision:(float)arg2;
- (BOOL)isFloatingPointType;
- (float)CGFloatValue;
- (void)appendJsonStringToString:(id)arg1;
- (int)chartGridValueType;
- (id)initWithArchive:(const struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; double x3; int x4; unsigned int x5[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; double x3; int x4; unsigned int x5[1]; }*)arg1 archiver:(id)arg2;
- (float)CGFloatValue;
- (int)stylePropertyValue;
- (int)styleIntValue;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (int)propertyValue;

@end
