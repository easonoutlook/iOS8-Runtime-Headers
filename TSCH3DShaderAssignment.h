/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSString, TSCH3DShaderVariableLinkage, TSCH3DShaderProgram;

@interface TSCH3DShaderAssignment : NSObject <TSCH3DShaderStatement> {
    TSCH3DShaderVariableLinkage *mAssignee;
    struct TSCH3DShaderVariableScopeType { 
        unsigned int mValue; 
    } mAssigneeScope;
    NSString *mStatement;
    NSArray *mDependees;
    TSCH3DShaderProgram *mProgram;
    struct TSCH3DShaderType { 
        unsigned int mValue; 
    } mLinkageType;
    struct vector<TSCH3DShaderVariableScopeType, std::__1::allocator<TSCH3DShaderVariableScopeType> > { 
        struct TSCH3DShaderVariableScopeType {} *__begin_; 
        struct TSCH3DShaderVariableScopeType {} *__end_; 
        struct __compressed_pair<TSCH3DShaderVariableScopeType *, std::__1::allocator<TSCH3DShaderVariableScopeType> > { 
            struct TSCH3DShaderVariableScopeType {} *__first_; 
        } __end_cap_; 
    } mDependeeScopes;
}

@property(readonly) TSCH3DShaderVariableLinkage * assignee;
@property(readonly) NSArray * dependees;
@property struct TSCH3DShaderType { unsigned int x1; } linkageType;
@property(readonly) NSString * string;
@property(readonly) struct TSCH3DShaderVariableScopeType { unsigned int x1; } assigneeScope;
@property(readonly) BOOL isLinked;

+ (id)assignmentWithAssignee:(id)arg1 statement:(id)arg2 dependees:(id)arg3 program:(id)arg4;

- (id)assignee;
- (BOOL)isLinked;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)string;
- (id)description;
- (void)dealloc;
- (id)resolve;
- (struct TSCH3DShaderVariableScopeType { unsigned int x1; })assigneeScope;
- (id)dependees;
- (id)forceLinkageForType:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (void)setGeneratedForType:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (struct TSCH3DShaderType { unsigned int x1; })linkageType;
- (id)expressionStringForType:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (BOOL)updateLinkageTypeAddVaryingToAdditions:(id)arg1;
- (id)resolveDependeesWithPreviousType:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (id)updateDependeesWithPreviousType:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (struct TSCH3DShaderType { unsigned int x1; })dominantDependeeLinkageType;
- (id)updateVaryingAssignmentForLinkage:(id)arg1;
- (id)varyingAssignmentForLinkage:(id)arg1;
- (struct vector<TSCH3DShaderVariableScopeType, std::__1::allocator<TSCH3DShaderVariableScopeType> > { struct TSCH3DShaderVariableScopeType {} *x1; struct TSCH3DShaderVariableScopeType {} *x2; struct __compressed_pair<TSCH3DShaderVariableScopeType *, std::__1::allocator<TSCH3DShaderVariableScopeType> > { struct TSCH3DShaderVariableScopeType {} *x_3_1_1; } x3; }*)dependeeScopes;
- (void)setAssigneeScopeToType:(struct TSCH3DShaderVariableScopeType { unsigned int x1; })arg1;
- (void)setLinkageType:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (id)initWithAssigneeLinkage:(id)arg1 statement:(id)arg2 dependees:(id)arg3 program:(id)arg4;

@end
