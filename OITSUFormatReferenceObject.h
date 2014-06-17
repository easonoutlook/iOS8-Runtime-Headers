/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, <TSUMultipleChoiceListChoiceProviding>;

@interface OITSUFormatReferenceObject : NSObject <NSCopying, NSMutableCopying> {
    struct { 
        int mFormatType; 
        union { 
            struct { 
                unsigned int mCurrencyCodeIndex : 16; 
                unsigned int mDecimalPlaces : 8; 
                unsigned int mNegativeStyle : 3; 
                unsigned int mShowThousandsSeparator : 1; 
                unsigned int mUseAccountingStyle : 1; 
            } mNumberFormatStruct; 
            struct { 
                unsigned int mFractionAccuracy : 8; 
            } mFractionFormatStruct; 
            struct { 
                unsigned int mBase : 8; 
                unsigned int mBasePlaces : 8; 
                unsigned int mBaseUseMinusSign : 1; 
            } mBaseFormatStruct; 
            struct { 
                unsigned int mSuppressDateFormat : 1; 
                unsigned int mSuppressTimeFormat : 1; 
                NSString *mDateTimeFormat; 
            } mDateFormatStruct; 
            struct { 
                unsigned int mUseAutomaticUnits : 1; 
                int mDurationUnitSmallest; 
                int mDurationUnitLargest; 
                int mDurationStyle; 
            } mDurationFormatStruct; 
            struct { 
                unsigned int mCustomFormatID; 
                struct { /* ? */ } *mData; 
            } mCustomFormatStruct; 
            struct { 
                double mMinimum; 
                double mMaximum; 
                double mIncrement; 
                int mDisplayFormatType; 
                unsigned int mOrientation : 2; 
                unsigned int mPosition : 2; 
            } mControlFormatStruct; 
            struct { 
                int mInitialValue; 
                unsigned int mMultipleChoiceListFormatID; 
                <TSUMultipleChoiceListChoiceProviding> *mData; 
            } mMultipleChoiceListFormatStruct; 
        } ; 
    } mFormatStruct;
    BOOL mUseExpandedContents;
}

@property(readonly) struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { unsigned int x_6_2_1; struct { /* ? */ } *x_6_2_2; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; } formatStruct;
@property(readonly) BOOL useExpandedContents;

+ (id)defaultDurationFormat;
+ (id)defaultDateFormat;

- (void)p_setFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { unsigned int x_6_2_1; struct { /* ? */ } *x_6_2_2; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; })arg1;
- (BOOL)useExpandedContents;
- (struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { unsigned int x_6_2_1; struct { /* ? */ } *x_6_2_2; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; })formatStruct;
- (id)initWithTSUFormatFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { unsigned int x_6_2_1; struct { /* ? */ } *x_6_2_2; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; })arg1 useExpandedContents:(BOOL)arg2;
- (id)initWithTSUFormatFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { unsigned int x_6_2_1; struct { /* ? */ } *x_6_2_2; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; })arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end
