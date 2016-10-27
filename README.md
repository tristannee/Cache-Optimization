# Cache

My work with the cache simulator is contained in *cache.c*. In this file, I completed the implementation
of a cache simulator and then used it to perform simple cache design analysis. Measurements from the
cache simulation are contained in the file *measurements.txt*.

My work with cache usage optimization is contained in the file *opt_mm_impl.c*. This is a modified version
of *mm_impl.c* which is a less cache-friendly version of *opt_mm_impl.c*. *opt_mm_impl.c* uses an ordered
multimap implementation that uses a binary tree structure (an implementation of this structure is provided
in *multimap.h* and *mm_impl.c*). We improve cache-friendliness by improving the locality of access when
navigating the data structure.

An explanation of optimizations is included in the file *optimizations.txt*.
