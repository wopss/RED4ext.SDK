from typing import List

class Item:
    name: str
    pattern: str
    expected: int
    index: int
    offset: int

    def __init__(self, pattern: str, name: str = '', expected: int = 1, index: int = 0, offset: int = 0) -> None:
        self.name = name
        self.pattern = pattern
        self.expected = expected
        self.index = index
        self.offset = offset

class Group:
    name: str
    pointers: List[Item]
    functions: List[Item]

    def __init__(self, name: str, pointers: List[Item] = [], functions: List[Item] = []) -> None:
        self.name = name
        self.pointers = pointers
        self.functions = functions

def get_groups() -> List[Group]:
    # Add new patterns here, please try to keep the groups ordering alphabetized.
    return [
        Group(name='CBaseFunction', functions=[
            Item(name='ExecuteScripted', pattern='40 55 48 81 EC ? ? ? ? 48 8D 6C 24 ? 8B 81 ? ? ? ?', expected=1, index=0),
            Item(name='ExecuteNative', pattern='48 89 5C 24 ? 48 89 7C 24 ? 55 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ?', expected=67, index=45),
            Item(name='InternalExecute', pattern='40 55 41 54 41 55 41 56 41 57 48 81 EC C0 01 00 00 48 8D 6C 24 40 F6', expected=1, index=0)
        ],
        pointers=[
            Item(name='Handlers', pattern='4C 8D 05 ? ? ? ? 48 8D 0D ? ? ? ? 4C 89 9B ? ? ? ?', expected=2, index=1, offset=3)
        ]),

        Group(name='CBaseRTTIType', functions=[
            Item(name='sub_80', pattern='48 8B C4 48 89 58 ? 57 48 83 EC ? 33 DB 4D 8B C8', expected=1, index=0),
            Item(name='sub_88', pattern='48 8B C4 48 89 58 ? 48 89 70 10 57 48 83 EC ? 33 DB', expected=4, index=2),
            Item(name='sub_90', pattern='48 89 5C 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 41 F7 41 ? ? ? ? ?', expected=13, index=1),
            Item(name='sub_98', pattern='48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 41 F7 41 ? ? ? ? ?', expected=1, index=0),
            Item(name='sub_A0', pattern='48 8B 02 4C 8D 05 ? ? ? ? 4C 8B CA', expected=1, index=0)
        ]),

        Group(name='CClass', functions=[
            Item(name='Unserialize', pattern='48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 4C 8B 15 ? ? ? ?', expected=1, index=0),
            Item(name='ToString', pattern='48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 41 ?', expected=11, index=2),
            Item(name='sub_80', pattern='48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57 48 83 EC ? F6 41 70 ?', expected=1, index=0),
            Item(name='sub_88', pattern='48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B 02 48 8B F1 48 8B CA', expected=5, index=4),
            Item(name='sub_90', pattern='48 89 5C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 81 EC ? ? ? ?', expected=3, index=1),
            Item(name='sub_98', pattern='48 89 5C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 81 EC ? ? ? ?', expected=3, index=2),
            Item(name='sub_A0', pattern='48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 56 41 57 48 8B EC 48 83 EC 70 41 F7 40 14 FF FF FF 3F', expected=1, index=0),
            Item(name='sub_B0', pattern='48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 8B 05 ? ? ? ?', expected=1, index=0),
            Item(name='sub_C0', pattern='48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 83 64 24 ? ?', expected=57, index=6),
            Item(name='GetMaxAlignment', pattern='48 89 5C 24 ? 57 48 83 EC ? 8B 59 ? E8 ? ? ? ?', expected=1, index=0),
            Item(name='sub_D0', pattern='4C 8B DC 49 89 5B ? 49 89 6B ? 49 89 73 ? 57 41 54 41 55 41 56', expected=33, index=25),

            Item(name='CreateInstance', pattern='48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 65 48 8B 04 25 ? ? ? ? 48 8B F1', expected=4, index=0),
            Item(name='GetProperty', pattern='48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 33 FF 48 8B DA', expected=4, index=0),
            Item(name='GetProperties', pattern='48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 8B D9 48 8B FA 48 8B 49 ? 48 85 C9 74'),
            Item(name='ClearScriptedData', pattern='48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 4C 89 60 ? 55 41 56 41 57 48 8B EC 48 83 EC ? 80 A1 ? ? ? ? ? 48 8D 99 ? ? ? ? 48 8B F9 48 8B CB E8'),

            Item(name='InitializeProperties', pattern='48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? F6 41 70 ?', expected=1, index=0),
            Item(name='AssignDefaultValuesToProperties', pattern='48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57 48 83 EC ? 48 8B F9 48 8B EA', expected=2, index=0)
        ]),

        Group(name='TTypedClass', functions=[
            Item(name='IsEqual', pattern='48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 54 41 56 41 57 48 83 EC ? 41 8B E9', expected=1, index=0)
        ]),

        Group(name='CEnum', functions=[
            Item(name='Unserialize', pattern='48 89 5C 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? F6 42 ? ?', expected=4, index=1),
            Item(name='ToString', pattern='48 8B C4 53 48 83 EC ? 48 83 60 ? 00 49 8B D8 4C 8D 40 ?', expected=1, index=0),
            Item(name='FromString', pattern='48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B F2 48 8B F9', expected=188, index=40)
        ]),

        Group(name='CBitfield', functions=[
            Item(name='Unserialize', pattern='48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? F6 42 ? 02', expected=1, index=0),
            Item(name='ToString', pattern='48 8B C4 48 89 58 ? 48 89 68 ? 56 57 41 56 48 83 EC ? 48 83 60 ? 00', expected=5, index=4),
            Item(name='FromString', pattern='48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 4C 89 70 ? 55 48 8B EC 48 83 EC ? F2 41 0F 10 00', expected=2, index=0)
        ]),

        Group(name='CClassFunction', functions=[
            Item(name='ctor', pattern='40 53 48 83 EC ? 49 8B C1 4D 8B D0 44 8B 4C 24 ? ? ? ? ? ? ? 01', expected=1, index=0)
        ]),

        Group(name='CClassStaticFunction', functions=[
            Item(name='ctor', pattern='40 53 48 83 EC ? 49 8B C1 4D 8B D0 44 8B 4C 24 ? ? ? ? ? ? ? 03', expected=1, index=0)
        ]),

        Group(name='CGlobalFunction', functions=[
            Item(name='ctor', pattern='48 83 EC ? 4D 8B D1 41 B9 ? ? ? ? E8 ? ? ? ?', expected=1, index=0),
        ]),

        Group(name='OpcodeHandlers', pointers=[
            Item(pattern='4C 8D 05 ? ? ? ? 48 8D 0D ? ? ? ? 4C 89 9B ? ? ? ?', offset=3, expected=2, index=0)
        ]),

        Group(name='CGameEngine', pointers=[
            Item(pattern='48 89 05 ? ? ? ? 48 8B D8 48 8B 10 FF 92 ? ? ? ?', offset=3)
        ]),

        Group(name='CNamePool', functions=[
            Item(name='AddCstr', pattern='40 53 48 83 EC ? 48 8B D9 48 89 54 24 ? 48 8B CA', expected=2, index=0),
            Item(name='AddCString', pattern='48 83 EC ? 48 8B 01 4C 8B D9 48 8D 4C 24 ?', expected=1, index=0),
            Item(name='AddPair', pattern='48 83 EC ? 4C 8B C1 48 89 54 24 ? 48 8B CA E8 ? ? ? ?', expected=3, index=1),
            Item(name='Get', pattern='48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8', expected=1, index=0)
        ]),

        Group(name='CRTTIRegistrator', pointers=[
            Item(name='RTTIAsyncId', pattern='F0 0F C1 05 ? ? ? ? FF C0 48 8D 0D ? ? ? ? 89 05 ? ? ? ? E8 ? ? ? ?', expected=11821, index=0, offset=4)
        ]),

        Group(name='CRTTISystem', functions=[
            Item(name='Get', pattern='48 83 EC ? 65 48 8B 04 25 ? ? ? ? BA ? ? ? ? 48 8B 08 8B 04 0A 39 05 ? ? ? ? 0F 8F ? ? ? ?', expected=5, index=1)
        ]),

        Group(name='CStack', pointers=[
            Item(name='vtbl', pattern='48 8D 05 ? ? ? ? 48 89 45 ? 48 8D 45 ? 48 89 45 ? 66 0F 7F 45 ?', offset=3, expected=1, index=0)
        ]),

        Group(name='CString', functions=[
            Item(name='ctor_str', pattern='48 85 D2 74 15 48 83 C8 FF 48 FF C0', expected=1, index=0),
            Item(name='ctor_span', pattern='40 53 48 83 EC ? 33 C0 48 8B D9 48 89 41 ? 88 01 89 41 ? E8', expected=3, index=1),
            Item(name='copy', pattern='B8 ? ? ? ? 39 41 ? 73 19 39 42 ?', expected=1, index=0),
            Item(name='dtor', pattern='40 53 48 83 EC ? 8B 41 ? 48 8B D9 C1 E8 ?', expected=2, index=0)
        ]),

        Group(name='DynArray', functions=[
            Item(name='Realloc', pattern='48 89 5C 24 ? 44 89 4C 24 ? 55 56 57 41 54 41 55 41 56 41 57', expected=17, index=0)
        ]),

        Group(name='Handle', functions=[
            Item(name='ctor', pattern='48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 48 83 61 ? ?', expected=1, index=0),
            Item(name='DecWeakRef', pattern='40 53 48 83 EC ? 48 8B D9 48 8B 49 ? 48 85 C9 74 ? 83 C8 FF F0 0F C1 41 04 83 F8 01 74 ? 48 83 C4 ? 5B C3')
        ]),

        Group(name='ISerializable', functions=[
            Item(name='sub_30', pattern='48 83 EC ? E8 ? ? ? ? 48 85 C0 74 11', expected=3, index=2),
            Item(name='sub_40', pattern='48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 56 48 83 EC ? F6 42 ? ?', expected=1, index=0),
            Item(name='sub_78', pattern='48 89 74 24 ? 48 89 7C 24 ? 44 88 4C 24 ? 55 41 56 41 57', expected=1, index=0),
            Item(name='sub_A0', pattern='48 83 EC ? 48 8B 01 FF 50 08 48 8B C8', expected=12, index=1),
            Item(name='sub_C0', pattern='40 53 48 83 EC ? 48 8B DA E8 ? ? ? ? 48 85 C0', expected=17, index=0)
        ]),

        Group(name='IScriptable', functions=[
            Item(name='sub_D8', pattern='40 53 48 83 EC ? 48 8B 01 49 8B D8 FF 50 08', expected=1, index=0),
            Item(name='DestructValueHolder', pattern='48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 83 79 ? ?', expected=3, index=0)
        ]),

        Group(name='JobHandle', functions=[
            Item(name='ctor', pattern='48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 54 48 83 EC ?', expected=1, index=0),
            Item(name='dtor', pattern='40 53 48 83 EC ? 48 8B 11 48 8B D9 48 85 D2', expected=6, index=0),
            Item(name='Join', pattern='48 83 EC ? 48 8B 02 4C 8B C2 8B 40 ?', expected=1, index=0)
        ]),

        Group(name='JobDispatcher', pointers=[
            Item(pattern='48 89 05 ? ? ? ? 48 83 C4 ? 5F C3', offset=3, expected=6, index=4)
        ],
        functions=[
            Item(name='DispatchJob', pattern='48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 44 88 40 ? 57 41 54 41 55', expected=2, index=0)
        ]),

        Group(name='JobQueue', functions=[
            Item(name='ctor_FromGroup', pattern='48 89 5C 24 ? 57 48 83 EC ? 48 8B 42 ? 48 8B DA 8A 52 ?', expected=1, index=0),
            Item(name='ctor_FromParams', pattern='48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 49 8B D9', expected=65, index=0),
            Item(name='dtor', pattern='40 53 48 83 EC ? 80 79 ? ? 48 8B D9 75 05', expected=1, index=0),
            Item(name='Capture', pattern='48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8B 43 ?', expected=6, index=0),
            Item(name='SyncWait', pattern='48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8B EC 48 83 EC ? 48 8D 79 ? 48 8B F1', expected=1, index=0)
        ]),

        Group(name='Memory', pointers=[
            Item(name='Vault', pattern='C6 04 0A 01 48 8D 0D ? ? ? ? 8B 50 ? 48 8B C1', offset=7, expected=2, index=0),
        ],
        functions=[
            Item(name='Vault::Alloc', pattern='48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 54 41 56 41 57 48 83 EC 60 48 B8 00 00 00 00 02 00 00 00', expected=1, index=0),
            Item(name='Vault::AllocAligned', pattern='48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57', expected=1041, index=8),
            Item(name='Vault::Realloc', pattern='40 53 48 83 EC ? 4D 8B D8 48 8B DA 4C 8B D1', expected=1, index=0),
            Item(name='Vault::ReallocAligned', pattern='48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57', expected=1041, index=11),
            Item(name='Vault::Free', pattern='48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 4C 8B 81 ? ? ? ?', expected=4, index=0),
            Item(name='Vault::Unk1', pattern='4C 8B 81 ? ? ? ? 48 8B C2 4C 8B 89 ? ? ? ? 49 2B C0', expected=3, index=2),
            Item(name='PoolStorage::OOM', pattern='48 83 EC ? 48 8B C1 44 89 44 24 ? 4C 8B CA', expected=1, index=0)
        ]),

        Group(name='TweakDB', functions=[
            Item(name='Get', pattern='48 83 EC ? 48 8B 05 ? ? ? ? 48 85 C0 74 0C', expected=1, index=0),
            Item(name='CreateRecord', pattern='48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 8B C2', expected=6, index=0),
        ]),

        Group(name='ResourceDepot', pointers=[
            Item(pattern="48 89 05 ? ? ? ? 49 8B 5B ? 49 8B 73", offset=3, expected=1, index=0)
        ]),

        Group(name='ResourceLoader', pointers=[
            Item(pattern='48 89 05 ? ? ? ? 48 83 C4 ? 5F C3', offset=3, expected=6, index=2)
        ],
        functions=[
            Item(name='FindTokenFast', pattern='48 8B C4 4C 89 40 ? 53 48 83 EC ? 48 8B DA 4C 8D 40 ?', expected=2, index=0),
            Item(name='LoadAsync', pattern='48 89 5C 24 ? 55 48 8B EC 48 83 EC ? 83 4D E8 ? 33 C0', expected=1, index=0)
        ]),

        Group(name='ResourceReference', functions=[
            Item(name='Load', pattern='40 53 48 83 EC ? 48 8D 59 ? 4C 8B C1 48 8B 0B', expected=1, index=0),
            Item(name='Fetch', pattern='40 53 48 83 EC ? 48 8B D9 E8 ? ? ? ? 48 8B 43 ? 48 85 C0', expected=2, index=0),
            Item(name='Reset', pattern='48 83 EC ? 48 8B 41 ? 48 83 61 ? ? 48 89 44 24 ? 48 8B 01 48 83 21 ?', expected=29, index=6)
        ]),

        Group(name='ResourceToken', functions=[
            Item(name='dtor', pattern='48 89 5C 24 ? 57 48 83 EC ? 48 8B D9 E8 ? ? ? ? 84 C0 74 36', expected=1, index=0),
            Item(name='Fetch', pattern='40 53 48 83  EC 50 48 8B D9 E8 ? ? ? ? 84 C0 74 0A 48 8D 43 28'),
            Item(name='OnLoaded', pattern='48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 48 8D 68 ? 48 81 EC ? ? ? ? 48 8B F2 48 8B D9 48 8B D1', expected=2, index=0),
            Item(name='CancelUnk38', pattern='F6 05 ? ? ? ? ? 75 ? 48 83 79 68 FF 75 ? C3'),
            Item(name='DestructUnk38', pattern='40 53 48 83 EC 30 48 8B D9 E8 ? ? ? ? 84 C0 75 ? 48 83 C4 ? 5B C3 48 8B 03 48 85 C0 74 ? 48 83 64 24 ? ? 48 8D 4C 24', expected=17, index=1)
        ]),

        Group(name='UpdateRegistrar', functions=[
            Item(name='RegisterGroupUpdate', pattern='48 8B C4 48 89 58 08 48 89 70 10 48 89 78 18 55 41 56 41 57 48 8D 68 B1 48 81 EC D0 00 00 00 48 8B 7D 77 49 8B D9'),
            Item(name='RegisterBucketUpdate', pattern='48 8B C4 48 89 58 08 48 89 70 10 48 89 78 18 55 41 56 41 57 48 8D 68 B9 48 81 EC D0 00 00 00 48 8B 7D 77 49 8B D9'),
        ]),

        Group(name='CRTTIScriptReferenceType', functions=[
            Item(name='ctor', pattern='40 53 48 83 EC 20 48 8B D9 48 8D 05 ? ? ? ? 33 C9 4C 8B C2 48 89 4B 08 48 89 03 '),
            Item(name='Set', pattern='48 89 5C 24 20 57 48 83 EC 20 4C 89 41 18 48 8B DA 48 89 51 10 48 8B F9')
        ])
    ]
