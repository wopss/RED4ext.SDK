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
        Group(name='Allocators', functions=[
            Item(name='RTTI::Get', pattern='48 83 EC 28 65 48 8B 04 25 58 00 00 00 8B 0D ? ? ? ? BA D0 07 00 00 48 8B 0C C8 8B 04 0A 39 05 ? ? ? ? 7F 0C', expected=369, index=2),
            Item(name='RTTIFunction::Get', pattern='48 83 EC 28 65 48 8B 04 25 58 00 00 00 8B 0D ? ? ? ? BA D0 07 00 00 48 8B 0C C8 8B 04 0A 39 05 ? ? ? ? 7F 0C', expected=369, index=14)
        ]),

        Group(name='CBaseFunction', functions=[
            Item(name='Execute', pattern='48 89 5C 24 08 57 48 81 EC 90 01 00 00 F6 41 78 01 48 8B DA'),
            Item(name='InternalExecute', pattern='40 55 41 54 41 55 41 56 41 57 48 81 EC C0 01 00 00 48 8D 6C 24 40 F6 41 78 01')
        ]),

        Group(name='CClass', functions=[
            Item(name='AllocInstance', pattern='48 89 6C 24 18 56 48 83 EC 30 41 0F B6 E8'),
            Item(name='GetProperty', pattern='48 89 5C 24 18 56 48 83 EC 20 83 B9 F0 00 00 00 00'),
            Item(name='GetFunction', pattern='4C 8B C9 48 85 C9 74 5E 49 8B 41 48')
        ]),

        Group(name='CClassFunction', functions=[
            Item(name='ctor', pattern='48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0', expected=3, index=1)
        ]),

        Group(name='CClassStaticFunction', functions=[
            Item(name='ctor', pattern='48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0', expected=3)
        ]),

        Group(name='CGameEngine', pointers=[
            Item(pattern='48 89 05 ? ? ? ? 49 8D 9D 88 00 00 00 49 8B 07 4C 8B C3', offset=3)
        ]),

        Group(name='CGlobalFunction', functions=[
            Item(name='ctor', pattern='48 89 5C 24 08 57 48 83 EC 20 49 8B D9', expected=6)
        ]),

        Group(name='CNamePool', functions=[
            Item(name='AddCstr', pattern='48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 41 56', expected=499, index=2),
            Item(name='AddCString', pattern='48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 41 56', expected=499, index=1),
            Item(name='AddPair', pattern='48 83 EC 38 33 C0 48 89 54 24 20 48 85 D2'),
            Item(name='Get', pattern='48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8')
        ]),

        Group(name='CRTTISystem', functions=[
            Item(name='Get', pattern='40 53 48 83 EC 20 65 48 8B 04 25 58 00 00 00 48 8D 1D ? ? ? ?')
        ]),

        Group(name='CStack', functions=[
            Item(name='ctor', pattern='48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8D 05 ? ? ? ? 48 C7 41 08 00 00 00 00', expected=3, index=1)
        ]),

        Group(name='CString', functions=[
            Item(name='ctor', pattern='40 53 48 83 EC 20 33 C0 C6 01 00', expected=4, index=2),
            Item(name='copy', pattern='40 53 48 83 EC 20 48 8B D9 48 3B CA', expected=8, index=0),
            Item(name='dtor', pattern='40 53 48 83 EC 20 48 8B D9 8B 49 14 8B C1 C1 E8')
        ]),

        Group(name='DynArray', functions=[
            Item(name='Realloc', pattern='40 56 57 41 54 41 56 48 83 EC 68')
        ]),

        Group(name='Handle', functions=[
            Item(name='ctor', pattern='48 89 5C 24 18 48 89 6C 24 20 57 48 83 EC 60 33 ED'),
            Item(name='DecWeakRef', pattern='40 53 48 83 EC 30 48 8B D9 48 8B 49 08 48 85 C9 74 43 B8 FF FF FF FF')
        ]),

        Group(name='IScriptable', functions=[
            Item(name='GetValueHolder', pattern='40 53 48 83 EC 20 48 83 79 38 00', expected=4, index=1)
        ]),

        Group(name='TweakDB', functions=[
            Item(name='Get', pattern='48 83 EC 48 48 8B 05 ? ? ? ? 48 85 C0 0F 85 8A 00 00 00'),
            Item(name='StaticFlatDataBuffer', pattern='48 89 1D ? ? ? ? 41 89 BF 30 01 00 00'),
            Item(name='InitFlatValue_ExceptInt32', pattern='48 89 5C 24 20 55 41 54 41 55 41 56 41 57 48 83 EC 20 65 48 8B 04 25 58 00 00 00 4C', expected=4, index=0),
            Item(name='FlatInt32ValueVftable', pattern='48 8D 3D ? ? ? ? 65 48 8B 04 25 58 00 00 00 4C 8B'),
            Item(name='FlatArrayInt32ValueVftable', pattern='48 8D 05 ? ? ? ? 48 89 06 48 8D 55 67'),
            Item(name='CreateRecord', pattern='48 89 5C 24 08 4C 89 44 24 18 57 48 83 EC 30 8B C2'),
        ]),

        Group(name='OpcodeHandlers', functions=[
            Item(name='Get', pattern='4C 8D 15 ? ? ? ? 48 89 42 38 49 8B F8 48 8B 02 4C 8D 44 24 20 C7', expected=5, index=0)
        ])
    ]
