/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_EditScriptData>, NSArray, NSMutableArray, _IntArray2D;

@interface _EditScript : NSObject  {
    BOOL _orderAtomsAscending;
    _IntArray2D *_distanceMatrix;
    int _currentOperation;
    <_EditScriptData> *_itemAData;
    <_EditScriptData> *_itemBData;
    NSArray *_operationPrecedenceArray;
    NSMutableArray *_script;
}

@property(copy) NSArray * operationPrecedenceArray;
@property(retain) NSMutableArray * script;


- (void)setOperationPrecedenceArray:(id)arg1;
- (id)operationPrecedenceArray;
- (void)setScript:(id)arg1;
- (id)operationPrecedenceArrayFromOperationPrecedence:(int)arg1;
- (void)addToCurrentScriptAtomEditOperation:(int)arg1 editIndex:(unsigned int)arg2 newText:(id)arg3 indexInArrayB:(unsigned int)arg4;
- (void)initializeCurrentScriptAtom;
- (void)finalizeCurrentScriptAtom;
- (id)script;
- (void)computeEditsFromMatrix;
- (void)computeDistanceMatrix;
- (id)initWithOperationPrecedence:(int)arg1 orderAtomsAscending:(BOOL)arg2;
- (id)description;
- (void)dealloc;

@end
